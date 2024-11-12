#include <stdio.h>

int main(){
    int N, aux;
    scanf("%d", &N);
    aux = N/100;
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", aux);
    N -= aux*100;
    aux = N/50;
    printf("%d nota(s) de R$ 50,00\n", aux);
    N -= aux*50;
    aux = N/20;
    printf("%d nota(s) de R$ 20,00\n", aux);
    N -= aux*20;
    aux = N/10;
    printf("%d nota(s) de R$ 10,00\n", aux);
    N -= aux*10;
    aux = N/5;
    printf("%d nota(s) de R$ 5,00\n", aux);
    N -= aux*5;
    aux = N/2;
    printf("%d nota(s) de R$ 2,00\n", aux);
    N -= aux*2;
    printf("%d nota(s) de R$ 1,00\n", N);
    return 0;
}
