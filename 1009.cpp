#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[20];
    double salary;
    double money;
    scanf("%s", name);
    scanf("%lf %lf", &salary, &money);
    money = 0.15*money;
    printf("TOTAL = R$ %.2lf\n", salary+money);

    return 0;
}
