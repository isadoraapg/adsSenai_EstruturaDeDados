#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro = (int *) malloc(sizeof(int) * 10);

    for (int i = 0; i < 5; i++){
        *ponteiro = vetor[i] * 10;
        printf("vetor[%d] = %d, ponteiro[%d] = %d\n", i, vetor[i], i, *ponteiro);
        ponteiro++;
    }

    printf("[%d] ponteiro");
    ponteiro -= 5;
    free (ponteiro);


return 0;
}