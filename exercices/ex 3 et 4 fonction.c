#include <stdio.h>

// Fonction pour retourner le plus grand des deux entiers
int max(int a, int b) {
    return (a > b) ? a : b;
}
int min(int l,int k){
return (l<k) ? l : k;
}

int main() {
    int num1, num2,num3,num4;
    char confirmation;

    
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);
    printf("Entrez le deuxieme entier : ");
    scanf("%d", &num2);

    
    printf("Le plus grand entre %d et %d est : %d\n", num1, num2, max(num1, num2));
    printf("you wanna add 2 more leters and wich one is the smallest? (o/n)");
    scanf(" %c", &confirmation);
     if (confirmation == 'o' || confirmation == 'O'){
     	printf("please enter ur first number: ");
     	scanf("%d",&num3);
     	scanf("%d",&num4);
     	printf("Le petite nombre est entre %d et %d est : %d\n", num3, num4, min(num3, num4));
	 }
	 else{
	 	printf("thank you for passing by sir!");
	 	
	 }
    return 0;  
}