#include <stdio.h>

void adicionaPorValor(int valor){
    valor++;
    printf("argumento = %d\n", valor);
}

void adicionarPorReferencia(int *valor){
    (*valor)++;
    printf("argumento = %d\n", *valor);
}

int main (){
    int valorOriginal = 100;
    adicionaPorValor(valorOriginal);
    printf("valor original = %d\n", valorOriginal);

    adicionarPorReferencia(&valorOriginal);
    printf("valor original = %d\n", valorOriginal);

    return 0;

}