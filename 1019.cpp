#include <stdio.h>

int main(){
    int N, segundo, minuto, hora;
    scanf("%d", &N);
    segundo = N%60;
    N /= 60;
    minuto = N%60;
    N /= 60;
    printf("%d:%d:%d\n", N, minuto, segundo);
    return 0;
}
