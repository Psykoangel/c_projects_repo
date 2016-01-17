#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL_image.h>

void pause();

int main (int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *ImagedeFond = NULL, *zozor = NULL, *sapin = NULL;
    SDL_Rect PositionFond, positionZozor, positionSapin;

    PositionFond.x = 0;
    PositionFond.y = 0;
    positionZozor.x = 630;
    positionZozor.y = 270;
    positionSapin.x = 510;
    positionSapin.y = 230;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_WM_SetIcon(SDL_LoadBMP("sdl_icon.bmp"), NULL);

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);

    SDL_WM_SetCaption("Image dans une fenêtre SDL", NULL);

    ImagedeFond = SDL_LoadBMP("lac_en_montagne.bmp");
    SDL_BlitSurface(ImagedeFond, NULL, ecran, &PositionFond);

    zozor = SDL_LoadBMP("zozor.bmp");
    SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format,0,0,255));
    SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);

    sapin = IMG_Load("sapin.png");
    SDL_BlitSurface(sapin, NULL, ecran,&positionSapin);

    SDL_Flip(ecran);
    pause();

    SDL_FreeSurface(ImagedeFond);
    SDL_FreeSurface(zozor);
    SDL_FreeSurface(sapin);
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
