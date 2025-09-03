// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char name[50],lname [50],sexe [50],mail [100];
    int age;
    printf("=======enter ur donnee=======\n");
    printf("ur name : ");
    scanf("%s",&name);
    printf("ur last name: ");
    scanf("%s",&lname);
    printf("ur gender:");
    scanf("%s",&sexe);
    printf("ur email:");
    scanf("%s",&mail);
    printf("ur age:");
    scanf("%d",&age);
    printf("ur name : %s name");
    printf("last name : %c lname");
    printf("gender : %s sexe");
    printf("ur mail : %s mail");
    printf("ur age : %d age");
    return 0;
}