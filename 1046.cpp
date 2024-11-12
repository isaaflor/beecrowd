#include <stdio.h>
int main(){

    int A, B, aux;
    scanf("%d %d", &A, &B);
    if (B > A) printf("O JOGO DUROU %d HORA(S)\n", B-A);
    else printf("O JOGO DUROU %d HORA(S)\n", 24-A+B);
    return 0;
}
