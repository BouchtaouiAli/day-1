#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    
    printf("taper la premiere chaine: ");
    gets(  chaine1);

    printf("taper la deuxieme chaine: ");
    gets(  chaine2);
    
    
    strcat(chaine1, chaine2);
    
    printf("apres la cancatenation:  %s\n", chaine1);

    

    return 0;
}
