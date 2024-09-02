#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2;

    printf("Digite um numero inteiro positivo; \n");
    scanf("%d",&n1);
    printf("Digite outro numero inteiro positivo; \n");
    scanf("%d",&n2);

    int x = n1;
    int y = n2;

    while(y != 0){

        x = x % y;
        int MDC = x;
        x = y;
        y = MDC;

    }
    printf("\nO MDC dos numeros eh %d ", x);

    int z = n1 * n2;
    int MMC;

    MMC = z / x ;

    printf("\n O MMC dos numeros eh %d ", MMC);

    return 0;
}
