// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float kmh,ms;
    printf("enter kmh : \n");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("speed en ms est: %.2f ms\n",ms);

    return 0;
}