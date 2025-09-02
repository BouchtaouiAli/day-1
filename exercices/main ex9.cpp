// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1,num2,somme,triple;
    printf("veuiller entrer deux random nombres: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    somme=num1+num2;
    printf("la somme de ce deux nombres est: %d \n",somme);
    if(num1==num2){
        triple=somme*3;
        printf("le triple est: %d",triple);
    }
        
    
      
    
    return 0;
}