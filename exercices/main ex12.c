
#include <stdio.h>

int main() {
    int n1;
    printf("veuiller entrer un nombre;\n");
    scanf("%d",&n1);
    if(n1<0){
        printf("le nombre est negatif");
    }
    else if(n1>0){
        printf("le nombre est positif");
    }
    else if(n1=0){
        printf("le nombre egal a zero");
    }
   
    return 0;
}

