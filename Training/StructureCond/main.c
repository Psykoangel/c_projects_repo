#include <stdio.h>
#include <stdlib.h>

int main()
{
char choix = 0;
printf("Entrer le choix : \n");
scanf("%c", &choix);

    while(choix != 'B')
    {
        printf("Mauvaise reponse\n");
        scanf("%c", &choix);
    }

return 0;
}
