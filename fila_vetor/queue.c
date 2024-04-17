#include <stdlib.h>
#include "queue.h"

struct Queue_
{
    int *elements;
    int length;
    int size;
};

Queue *create(int length)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->elements = (int *)malloc(sizeof(int) * length);
    queue->length = length;
    queue->size = 0;
    return queue;
}

int peek(Queue *queue, int *value)
{
    if (queue->size == 0)
    {
        return 1;
    }

    *value = queue->elements[queue->size - 1];
    return 0;
}

int put(Queue *queue, int value)
{
    // Completar o código
    if(queue->size == queue->length){
        return 1; //fila cheia
    }

    int index = queue->size; //index é inicializada com o tamanho atual da fila e prepara pra proxima posiçao disponivel
    
    //deslocar elementos existentes
    while (index > 0){
        queue->elements[index] = queue->elements[index-1];  //move o elemento da posição index-1 para a posição index, deslocando todos pra frente
        index--;
    }
    queue->elements[0] = value; //insere na primeira posição
    queue->size++;
    return 0;
    {

    }
}

int get(Queue *queue, int *value)
{
    // Completar o código
    if(queue->size == 0){
        return 1;
    }

    queue->size = queue->size - 1;
    int posicao = queue->size;
    *value = queue->elements[posicao];

    return 0;
}

int size(Queue *queue)
{
    return queue->size;
}

int is_full(Queue *queue)
{
    if (queue->size == queue->length)
    {
        return 0;
    }
    return 1;
}

int is_empty(Queue *queue)
{
    if (queue->size == 0)
    {
        return 0;
    }
    return 1;
}

void destroy(Queue *queue)
{
    free(queue->elements);
    free(queue);
}