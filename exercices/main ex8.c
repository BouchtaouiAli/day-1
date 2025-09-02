// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char caractere, voyelle;
    printf("veuiller entrer un nombre: \n");
    scanf("%c",&caractere);
    switch (caractere) {
        
        case 'y' :{
            printf("le caractere est un voyelle");
            break;
        }
        case 'a':{
            printf("le caractere est un voyelle");
            break;
        }   
        case  'e':{
            printf("le caractere est un voyelle");
            break;
        }
        case  'i':{
            printf("le caractere est un voyelle");
            break;
        }
        case  'o':{
            printf("le caractere est un voyelle");
            break;
        }
        case  'u':{
            printf("le caractere est un voyelle");
            break;
        }
        default: {
            printf("pardon ce caractere pas d un voyelle");
        }
    }

    return 0;
}