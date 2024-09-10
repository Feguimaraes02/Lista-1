#include <stdio.h>

int main() {
    int n, i = 0;
    int b[32];

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Sua representacao binaria eh: 0\n");
        return 0;
    }

    while (n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Sua representacao binaria eh: ");

    while (i > 0) {
        i--;
        printf("%d", b[i]);
    }
    printf("\n");

    return 0;
}
