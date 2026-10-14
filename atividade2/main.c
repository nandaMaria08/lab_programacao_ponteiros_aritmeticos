#include <stdio.h>
#include <stdlib.h>

float calcularMediaDeslocamento(float *dados, int n){
    float soma = 0.0;

    for (int i = 0; i < n; i++){
        soma += *(dados + i);
    }

    return soma/n;
}

int main()
{
    float notas[8];

    printf("Digite as notas de 8 alunos:\n");
    for(int i=0; i<8; i++){
        scanf("%f", notas+i);
    }

    float media = calcularMediaDeslocamento(notas, 8);
    printf("\nMedia aritmetica da turma: %.2f", media);
}
