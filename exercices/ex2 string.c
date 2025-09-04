#include <stdio.h>

int main() {
    char chaine[100];
    int lent = 0, count = 0;

    printf("taper une chaine de characteres: ");
    scanf("%[^\n]", chaine);

    while (chaine[lent] != '\0' && chaine[lent] != '\n') {
        if (chaine[lent] != ' ') {   
            count++;
        }
        lent++;
    }

  	 printf("vous avez entre : %s\n", chaine);
  	printf(" nombre  charactere: %d\n", count);
    printf("la longueur de chaine  est: %d\n", lent);

    return 0;
}
