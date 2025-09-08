#include <stdio.h>

void triABulles(int tableau[], int taille) {
    int i, j, temp;
    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[] = {64, 34, 25, 12, 22, 11, 90};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Tableau avant le tri :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    triABulles(tableau, taille);

    printf("Tableau après le tri :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}