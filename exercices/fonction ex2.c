#include <stdio.h>
#include <stdlib.h>

int somme(int a,int b){

    int p=0;
        p=(a*b);

}


int main(int argc, char *argv[]) {
    int a,b,p;

    printf("entrer votre premier nombre: ");
    scanf("%d",&a);
    printf("entrer votre deuxeme nombre: ");
    scanf("%d",&b);

    p=somme(a,b);

    printf("le produit de ce 2 nombres est: %d",p);



	return 0;
}
