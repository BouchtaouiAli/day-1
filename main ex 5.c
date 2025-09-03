// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int c;
    printf("veuiller enter la temperature: ");
    scanf("%d",&c);
    if(c<0){
     printf("letat d leau est: solide");
    }
   else if(c<100){
        printf("letat d leau est: liquide");
    }
    else if(c>100){
        printf("letat d leau est: gaz");
    }
    return 0;
}