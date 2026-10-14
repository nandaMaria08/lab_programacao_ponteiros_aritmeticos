#include <stdio.h>
#include <stdlib.h>

void imprimirVetorPonteiro(int *v, int tamanho){
    int *p = v;
    int *fim = v + tamanho;

    while(p < fim){
        printf("%d ", *p);
        p++;
    }
}



int main()
{
    int vetor[6];
    printf("Digite 6 numeros inteiros:\n");
    for(int i=0; i<6; i++){
        scanf("%d", vetor+i);
    }

    printf("Elementos do vetor:");
    imprimirVetorPonteiro(vetor, 6);
}
