#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
	char titre[100][50];
	char auteur[100][50];
	float prix;
	int quant;
	int newquant;
	int nblivre,i;
	char titreCherche[100][50];

	//int tab[nblivre],choix;
    int choix;
	printf("votre library parammetre :");
    printf("\n 1 pour ajouter des livres: ");
    printf("\n 2 pour livres informations: ");
    printf("\n 3 pour modifier les quantite des livres: ");
    printf("\n 4 pour supprimer un livre: ");
    printf("\n 5: pour Afficher le Nombre Total de Livres en Stock");
    printf("\n Enter your Choice: ");
    scanf("%d", &choix);

    switch(choix)
    {
    case 1:
        {
            printf("bonjour vuillez choisie le nombre des livres: \n");
            scanf("%d",&nblivre);
            for(i=0;i<nblivre;i++){
                printf("info livre %d: \n",i+1);

                printf("le titre de livre : ");
                scanf("%[\n]",&titre[i]);
                getchar();

		printf("l auteur de livre : ");
		scanf("%s",&auteur[i]);
		printf("le prix de livre  : ");
		scanf("%f",&prix);
		printf("la quantite de livre : ");
		scanf("%d",&quant);
		}
        }

      break;

    case 2:
for(i=0;i<nblivre;i++){
		printf("info livre %d: \n",i+1);
		printf("le titre de livre est    : %s \n ",&titre[i]);
		printf("l auteur de livre est    : %s \n ",&auteur[i]);
		printf("le prix de livre est est : %f \n ",&prix);
		printf("la quantite de livre est : %d \n ",&quant);
	}
      break;

    case 3:
      if (nblivre == 0) {
        printf("Aucun livre dans le stock.\n");
        break;
    }

    char titreCherche[50];
    int trouve = 0;
    printf("====== Modifier la quantite d'un livre ======\n");
    printf("Entrez le titre du livre : ");
    scanf(" %[^\n]", titreCherche);

    for (int i = 0; i < nblivre; i++) {
        if (titre[i],titreCherche== 0) {
            printf("Quantite actuelle : %d\n", quant);
            printf("Entrez la nouvelle quantite : ");
            scanf("%d", &quant);
            printf("Quantite mise a jour avec succes !\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Livre introuvable.\n");
    }

    break;
}

//    case 4:

//      break;

   // case 5:

     // break;

   // default:
   //   printf("Invalid Input");
  //    break;



//	for(i=0;i<nblivre;i++){
//		printf("info livre %d: \n",i+1);
//		printf("le titre de livre : ");
//		scanf("%s",&titre[i]);
//		printf("l auteur de livre : ");
//		scanf("%s",&auteur[i]);
//		printf("le prix de livre  : ");
//		scanf("%s",&prix[i]);
//		printf("la quantite de livre : ");
//		scanf("%s",&quant[i]);
//		}

//	for(i=0;i<nblivre;i++){
//		printf("info livre %d: \n",i+1);
//		printf("le titre de livre est    : %s \n ",&titre[i]);
//		printf("l auteur de livre est    : %s \n ",&auteur[i]);
//		printf("le prix de livre est est : %s \n ",&prix[i]);
//		printf("la quantite de livre est : %s \n ",&quant[i]);
//	}


 //       printf("======pour modifie la quantite d'un livre====== \n");
   //     printf("selecter un livre %: ");
     //   scanf("%s ",&titre[i]);
     //   printf("tu choisie le livre: %s ",&titre[i]);
    //    printf("saizy un noveux nombre: ");
      //  scanf("%s",&newquant[i]);
      //  printf("la quantite change avec succes au: %s",&newquant[i]);




	return 0;
}



