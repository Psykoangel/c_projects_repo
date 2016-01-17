#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

void pause();

int main(int argc, char *argv[])
{
    SDL_Surface *ecran =NULL;
    SDL_Surface *Rectangle = NULL;
    SDL_Rect position;
    position.x = 0;
    position.y = 0;

    if (SDL_Init(SDL_INIT_VIDEO))
    {
        fprintf(stderr,"Erreur d'initialisation de la SDL");
        exit(EXIT_FAILURE);
    }

    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    if (ecran == NULL)
    {
        fprintf(stderr, "Impossible de charger le mode video : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_WM_SetCaption("fenêtre SDL", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 17, 206, 112));
    Rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, 220,180, 32,0,0,0,0);
    SDL_FillRect(Rectangle, NULL, SDL_MapRGB(ecran->format, 255,255,255));
    SDL_BlitSurface(Rectangle, NULL, ecran, &position);
    SDL_Flip(ecran);

    pause();

    SDL_FreeSurface(Rectangle);
    SDL_Quit();
    return EXIT_SUCCESS;
}

void pause()
{
    int continuer = 1;
    SDL_Event event;
    while(continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT :
                continuer = 0;
        }
    }
}
