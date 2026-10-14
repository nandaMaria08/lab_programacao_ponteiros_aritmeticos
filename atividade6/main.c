#include <stdio.h>
#include <stdlib.h>

int ehPalindromoVetor(int *v, int n){
    int *inicio = v;
    int *fim = v + n - 1;

    while (inicio < fim){
        if (*inicio != *fim){
            return 0;
        }
        inicio++;
        fim --;
    }

    return 1;
}

void exibirVetor(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d", *(v + i));
    }
}

int main()
{
    int vetor1[] = {1, 4, 7, 4, 1};
    int vetor2[] = {1, 2, 3, 4, 1};

    printf("Vetor 1: ");
    exibirVetor(vetor1, 5);
    printf("Resultado (1=Sim, 0=Não): %d\n\n", ehPalindromoVetor(vetor1, 5));

    printf("Vetor 2: ");
    exibirVetor(vetor2, 5);
    printf("Resultado (1=Sim, 0=Não): %d\n", ehPalindromoVetor(vetor2, 5));
}
