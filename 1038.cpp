#include <stdio.h>

int main(){

    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X == 1) printf("Total: R$ %.2f\n", 4.0*Y);
    else if (X == 2) printf("Total: R$ %.2f\n", 4.5*Y);
    else if (X == 3) printf("Total: R$ %.2f\n", 5.0*Y);
    else if (X == 4) printf("Total: R$ %.2f\n", 2.0*Y);
    else printf("Total: R$ %.2f\n", 1.5*Y);
    return 0;
}
