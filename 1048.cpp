#include <stdio.h>
int main(){

    float s, p;
    scanf("%f", &s);
    if (s>= 0 && s <= 400) p = 15;
    else if (s > 400 && s <= 800) p = 12;
    else if (s > 800 && s <= 1200) p = 10;
    else if (s > 1200 && s <= 2000) p = 7;
    else p = 4;

    printf("Novo salario: %.2f\n", s+(p/100*s));
    printf("Reajuste ganho: %.2f\n", p/100*s);
    printf("Em percentual: %.0f %%\n", p);
    return 0;
}
