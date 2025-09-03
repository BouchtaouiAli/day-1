// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,delta,x,x1,x2;
    printf("veuiller enter votre nombres: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    delta=b*b-4*a*c;
    if(delta<0){
        printf("delta pas de solution");
    }
    else if(delta==0){
        x=-b/2*a;
        printf("est: %.2f \n",x);
    }
    else if(delta>0){
       x1=-b-sqrt(delta)/2*a;
       x2=-b+sqrt(delta)/2*a;
       printf("the first solution is= %.2f\n",x1); 
       printf("the second solution is= %.2f\n",x2);
       
    }
    
      
    
    return 0;
}