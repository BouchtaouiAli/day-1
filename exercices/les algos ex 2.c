#include <stdio.h>
#include <stdlib.h>

void triParInsertion(int tab[], int taille[]){
	for(int i = 0; i < taille;i++){
		int key = tab[i];
		int j = i - 1;
		while(j>= 0 && tab[j] > key){
			tab[j + 1] = tab[j];
			j = j - 1;
		}
		tab[j + 1]= key;
		}
	}
	void affichertab(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}


int main(int argc, char *argv[]) {
	
	int tab[] = {5, 21, 3, 5, 6, 1, -100};
    int taille = sizeof(tab) / sizeof(tab[0]);
    
    printf("tableau avant le tris: \n");
    affichertab(tab, taille);
    
    triParInsertion(tab, taille);
    
    printf("tableau avant le tris: \n");
    affichertab(tab, taille);
    

	return 0;
}