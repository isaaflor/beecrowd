#include <stdio.h>

int main() {
    int number, hours;
    float amount;
    scanf("%d %d %f", &number, &hours, &amount);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, hours*amount);
    return 0;
}
