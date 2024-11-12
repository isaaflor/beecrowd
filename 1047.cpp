#include <stdio.h>
int main(){

    int hi, mi, hf, mf, mini, minf, x, hh, mm;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    mini = hi*60+mi;
    minf = hf*60+mf;
    if (minf <= mini) minf += 24*60;
    x = minf-mini;
    hh = x/60;
    mm = x%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hh, mm);
    return 0;
}
