// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float C,K;
    printf("enter ur temperature en celisus: \n");
    scanf("%f",&C);
    K = C + 273.15;
    printf("the temperature en kelvin est: %.2f K\n",K);

    return 0;
}