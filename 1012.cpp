#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    printf("TRIANGULO: %.3f\n", (A*C)/2);
    printf("CIRCULO: %.3f\n", 3.14159*pow(C, 2));
    printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2);
    printf("QUADRADO: %.3f\n", pow(B, 2));
    printf("RETANGULO: %.3f\n", A*B);
    return 0;
}
