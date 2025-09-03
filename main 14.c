#include <stdio.h>

int main() {
    int revenue, credit, pret;

    printf("entrez le revenue annuel: ");
    scanf("%d", &revenue);

    printf("entrez le credit :");
    scanf("%d", &credit);

    printf("entrez le pret :");
    scanf("%d", &pret);

    if(revenue >= 30000 && credit >= 700 && pret <= 10){
        printf("eligible");
    }else if(revenue >= 30000 && credit >=650 && pret<= 15){
        printf("eligible avec condition");
    }
    else
    printf("non eligible");

    return 0;
}
