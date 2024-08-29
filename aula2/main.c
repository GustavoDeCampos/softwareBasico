#include "stdio.h"

int funcVet(int vetor[], int tamanho){
    int i, j = 0;
    int repetidos = 0;

    for (i = 0; i < tamanho; i++){
        int atual = vetor[i];
        for (j = i + 1; j < tamanho; j++){
            int possivelRepetido = vetor[j];
            if (atual == possivelRepetido){
                repetidos++;
            }
        }
    }
    return repetidos;
}    

int main(){
    int vetor[] = {4, 2, 3, 4, 5, 3, 5, 7, 2, 8};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    int resultado = funcVet(vetor, tamanho);
    printf("Resultado: %d\n", resultado);

    return 0;
}