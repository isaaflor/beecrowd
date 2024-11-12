#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p1, p2, u1, u2;
    float v1, v2;
    scanf("%d %d %f %d %d %f", &p1, &u1, &v1, &p2, &u2, &v2);
    printf("VALOR A PAGAR: R$ %.2f\n", u1*v1+u2*v2);

    return 0;
}
