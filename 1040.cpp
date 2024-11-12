#include <stdio.h>

int main(){

    float N1, N2, N3, N4, N5, media;
    scanf ("%f %f %f %f", &N1, &N2, &N3, &N4);
    N1 *= 2; N2 *= 3; N3 *= 4; media = (N1+N2+N3+N4)/10;
    if (media >= 7){
        printf("Media: %.1f\nAluno aprovado.\n", media);
    }
    else if (media < 5){
        printf("Media: %.1f\nAluno reprovado.\n", media);
    }
    else{
        printf("Media: %.1f\nAluno em exame.\n", media);
        scanf("%f", &N5);
        printf("Nota do exame: %.1f\n", N5);
        media = (media+N5)/2;
        if(media >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", media);
    }
    return 0;
}
