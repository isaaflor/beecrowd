#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double R;
    scanf("%lf", &R);
    printf("VOLUME = %.3lf\n", 3.14159*(4.0/3)*pow(R, 3));

    return 0;
}
