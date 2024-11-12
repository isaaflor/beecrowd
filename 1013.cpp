#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, x, MaiorXC;
    scanf("%d %d %d", &a, &b, &c);
    x = ((a+b+abs(a-b))/2);
    MaiorXC = ((x+c+abs(x-c))/2);
    printf("%d eh o maior\n", MaiorXC);
    return 0;
}
