
#include <stdio.h>

int rechercheLineaire(int tab[], int taille, int cpmr) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == cpmr) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int tab[] = {10, 20, 55, 30, 40, 50};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int cpmr = 30;

    int resultat = rechercheLineaire(tab, taille, cpmr);

    if (resultat != -1) {
        printf("Element trouve a l'indice %d.\n", resultat);
    } else {
        printf("Element non trouve dans le tableau.\n");
    }

    return 0;
}
