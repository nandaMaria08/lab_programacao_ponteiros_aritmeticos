#include <stdio.h>
#include <stdlib.h>

void inverterVetor(int *v, int n){
    int *inicio = v;
    int *fim = v + n - 1;

    while(inicio < fim){
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

void exibirVetor(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");
}

int main()
{
    int vetor_par[] = {1, 2, 3, 4, 5, 6};
    int tam_par = 6;

    printf("Vetor Par Original: ");
    exibirVetor(vetor_par, tam_par);

    inverterVetor(vetor_par, tam_par);

    printf("Vetor Par Invertido: ");
    exibirVetor(vetor_par, tam_par);
    printf("\n");

    int vetor_impar[] = {10, 20, 30, 40, 50};
    int tam_impar = 5;

    printf("Vetor Ímpar Original: ");
    exibirVetor(vetor_impar, tam_impar);

    inverterVetor(vetor_impar, tam_impar);

    printf("Vetor Ímpar Invertido: ");
    exibirVetor(vetor_impar, tam_impar);
}
