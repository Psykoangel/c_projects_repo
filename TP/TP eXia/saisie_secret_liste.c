#include <stdio.h>
#include <stdlib.h>

main2()
{
  /* Declarations : */
  /* Nom du fichier et pointeur de reference */
  char NOM_FICH[] = "fichier.txt";
  FILE *FICHIER = NULL;
   /* Autres variables */
  char NOM[30], PRENOM[30], VILLE[30];
  int I,N_ENR;

  /* Ouverture du nouveau fichier en ecriture */
  FICHIER = fopen(NOM_FICH, "w");
  if (!FICHIER)
     {
      printf("\aERREUR: Impossible d'ouvrir "
             "le fichier: %s.\n", NOM_FICH);
      exit(-1);
     }
   /* Saisie des donnees et creation du fichier */
  printf("*** Creation de %s ***\n", NOM_FICH);
  printf("Nombre d'enregistrements a creer : ");
  scanf("%d",&N_ENR);
  for (I=1; I<=N_ENR; I++)
    {
     printf("Enregistrement No: %d \n", I);
     printf("Ville  : ");
     scanf("%s",VILLE);
     printf("Nom    : ");
     scanf("%s",NOM);
     printf("Prenom : ");
     scanf("%s",PRENOM);
     fprintf(FICHIER, "%s * %s, %s\n",VILLE, NOM, PRENOM);
    }
  /* Fermeture du fichier */
  fclose(FICHIER);

   return 0;
}
