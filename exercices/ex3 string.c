#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    
    printf("taper la premiere chaine: ");
    scanf("%s", chaine1);

    printf("taper la deuxieme chaine: ");
    scanf("%s", chaine2);

    if (strcmp(chaine1, chaine2) == 0) {
        printf("Les deux chaines sont égales.\n");
    } 
    else if (strcmp(chaine1, chaine2) > 0) {
        printf("La plus grande chaine est: %s\n", chaine1);
    } 
    else {
        printf("La plus grande chaine est: %s\n", chaine2);
    }

    return 0;
}
