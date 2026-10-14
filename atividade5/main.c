#include <stdio.h>
#include <stdlib.h>

int filtrarPositivos(int *origem, int n, int *destino){
    int *pOrigem = origem;
    int *pDestino = destino;
    int *fim = origem +n;

    while(pOrigem < fim){
        if(*pOrigem > 0){
            *pDestino = *pOrigem;
            pDestino++;
        }
        pOrigem++;
    }

    return pDestino - destino;
}

int main()
{
    int origem[] = {-5, 10, 0, 3, -2, 8, 15};
    int n = 7;
    int destino[7];


    int totalCopiados = filtrarPositivos(origem, n, destino);

    printf("Elementos positivos filtrados: ");
    for (int i = 0; i < totalCopiados; i++) {
        printf("%d ", *(destino + i));
    }
    printf("\nTotal de elementos copiados: %d\n\n", totalCopiados);
}
