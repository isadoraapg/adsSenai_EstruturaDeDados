#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[4] = {1, 2, 3, 4};
    int *ponteiro = (int *) malloc(sizeof(int) *4);

    for (int i = 0; i < 4; i++){
        ponteiro[i] = vetor[i] * 10;
        printf("vetor[%d] = %d, ponteiro[%d] = %d\n", i, vetor[i], i, ponteiro[i]);
    }
    
    free(ponteiro);

    return 0;
}