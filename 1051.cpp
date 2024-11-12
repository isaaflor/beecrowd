#include <stdio.h>

int main(){

    float S, T=0, aux=0;
    scanf("%f", &S);
    if (0 <= S && S <= 2000) printf ("Isento\n");
    else{
        if (4500 < S){
            aux = S-4500;
            T += 0.28*aux; 
            S -= aux;
        }
        if (3000.01 <= S && S <= 4500){
            aux = S-3000;
            T += 0.18*aux;
            S -= aux;
        }
        if (2000.01 <= S && S <= 3000){
            aux = S-2000;
            T += 0.08*aux;
            S -= aux;
        }
        printf("R$ %.2f\n", T);   
    }
    return 0;
}
