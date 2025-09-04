#include <stdio.h>
#include <stdlib.h>

int factorielle(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++) {
        f = f * i;
}
    return f;
}
int main(int argc, char *argv[]) {
	int n;
	printf("entrer un nombre: ");
	scanf("%d",&n);
	if(n<0){
		printf("le nombre est n accept pas le factor!!");
	}
	else{
		printf("le factorielle de le nombre %d est:  %d ",n,factorielle(n));
	}
	
	
	
	
	
	return 0;
}