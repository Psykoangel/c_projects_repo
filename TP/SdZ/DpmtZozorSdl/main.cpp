#include <stdio.h>
#include <stdlib.h>

#include <SDL/SDL.h>
#include <SDL_image.h>

int main(int argc, char *argv[]) {

  SDL_Surface *ecran = NULL, *zozor = NULL;
  SDL_Rect positionZozor;
  SDL_Event event;
  int continuer = 1;

  if (SDL_Init(SDL_INIT_VIDEO)) {
    fprintf(stderr, "Erreur d'initialisation de la SDL");
    exit(EXIT_FAILURE);
  }

  ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

  if (ecran == NULL) {
    fprintf(stderr, "Impossible de charger le mode video : %s", SDL_GetError);
    exit(EXIT_FAILURE);
  }

  SDL_WM_SetCaption("Gestion des évènements en SDL", NULL);
  SDL_EnableKeyRepeat(10, 10);

  // Chargement de Zozor
  zozor = SDL_LoadBMP("zozor.bmp");
  SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));

  // On centre Zozor à l'écran
  positionZozor.x = /*0;*/ ecran->w / 2 - zozor->w / 2;
  positionZozor.y = /*0;*/ ecran->h / 2 - zozor->h / 2;

  while (continuer) {

    SDL_WaitEvent(&event);

    switch (event.type) {
    case SDL_QUIT:
      continuer = 0;
      break;
    case SDL_KEYDOWN:
      switch (event.key.keysym.sym) {
      case SDLK_ESCAPE:
        continuer = 0; // ESCAPE
        break;
      case SDLK_UP: // Flèche haut
        positionZozor.y -= 10;
        break;
      case SDLK_DOWN: // Flèche bas
        if (positionZozor.y < ecran->h - zozor->h)
          positionZozor.y += 10;
        break;
      case SDLK_RIGHT: // Flèche droite
        if (positionZozor.x < ecran->w - zozor->w)
          positionZozor.x += 10;
        break;
      case SDLK_LEFT: // Flèche gauche
        positionZozor.x -= 10;
        break;
      }

      break;
    }

    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255,
                                         255)); /* On efface l'écran */
    SDL_BlitSurface(zozor, NULL, ecran,
                    &positionZozor); /* On place zozor à sa nouvelle position */
    SDL_Flip(ecran);                 /* On met à jour l'affichage */
  }

  SDL_FreeSurface(zozor);

  SDL_Quit();

  return EXIT_SUCCESS;
}
