#include <stdio.h>

int main(){
    int age, aux;
    scanf("%d", &age);
    aux = age/365;
    printf("%d ano(s)\n", aux);
    age -= aux*365;
    aux = age/30;
    printf("%d mes(es)\n", aux);
    age -= aux*30;
    printf("%d dia(s)\n", age);
    return 0;
}
