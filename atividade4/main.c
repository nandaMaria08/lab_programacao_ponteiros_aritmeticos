#include <stdio.h>
#include <stdlib.h>

int encontrarMaiorIndice(int *v, int n, int *valorMaior){
    int *ptrMaior = v;
    int *p = v + 1;
    int *fim = v + n;

    while (p < fim){
        if(*p > * ptrMaior){
            ptrMaior = p;
        }
        p++;
    }

    *valorMaior = *ptrMaior;
    return ptrMaior - v;
}

int main()
{
    int vetor[10];
    int valorMaior;

    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", vetor + i);
    }

    int indice = encontrarMaiorIndice(vetor, 10, &valorMaior);

    printf("\n O maior elemento eh %d e esta no indice %d. \n", valorMaior, indice);
}
