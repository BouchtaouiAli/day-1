
#include <stdio.h>

int main() {
    int choix;
    int mois,jours,months,heures,minutes,secondes,annee;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    printf("Menu :\n");
    printf("1. Convertir en jours\n");
    printf("2. Convertir en months\n");
    printf("3. Convertir en heures\n");
    printf("3. Convertir en minutes\n");
    printf("3. Convertir en secondes\n");
    printf("4. Quitter\n");
    printf("Faites votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            jours = annee * 365; 
            printf("%d année(s) = %d jours\n", annee, jours);
            break;
        case 2:
            months = annee * 12;
            printf("%d année(s) = %d mois\n", annee, mois);
            break;
        case 3:
            heures = annee * 8760;
            printf("%d année(s) = %d heures\n", annee, heures);
            break;
        case 4:
            minutes = annee * 525600;
            printf("%d année(s) = %d minutes\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 31536000;
            printf("%d année(s) = %d secondes\n", annee, secondes);
            break;
        case 7:
            printf("Au revoir !\n");
            break;    
        default:
            printf("Choix invalide. Veuillez réessayer.\n");
    }

    return 0;
}

