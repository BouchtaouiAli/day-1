// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float a,b,plus,mul,min,divs;
    printf("veuiller entrer votre nombres: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    plus=a+b;
    min=a-b;
    mul=a*b;
    divs=a/b;
    printf("addition est: %.2f \n",a+b);
    printf("la soustraction est: %.2f \n",a-b);
    printf("la multiplication est: %.2f \n",a*b);
    printf("la division est: %.2f \n",a/b);
    return 0;
}