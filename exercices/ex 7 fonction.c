#include <stdio.h>

// fonction qui calcule le n-ième terme de Fibonacci
int fibonacci(int n) {
    int a = 0, b = 1, temp, i;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La suite de Fibonacci n'est pas definie pour les nombres negatifs.\n");
    } else {
        printf("Le terme %d de la suite de Fibonacci est : %d\n", n, fibonacci(n));
    }

    return 0;
}
