#include <stdio.h>
#include <stdlib.h>

int somme(int a,int b){
int s=0;
s=a+b;
return s;
	
}
int main(int argc, char *argv[]) {
	int a,b,s;
	printf("entrer votre 1 nombre: ");
	scanf("%d",&a);
	printf("entrer votre 2 nombre: ");
	scanf("%d",&b);
	s=somme(a,b);
	printf("la somme est : %d",s);
	return 0;
}