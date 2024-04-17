#include <stdio.h>
#include "queue.h"

int main()
{
    int temp;
    int state;

    Queue *queue = create(5);
    for (int i = 10; i < 80; i += 10)
    {
        state = put(queue, i);
        if (state == 0)
        {
            peek(queue, &temp);
            printf("Inicio = %d\n", temp);
        }
        else
        {
            printf("*** Fila cheia ***\n");
        }
    }
    for (int i = 10; i < 80; i += 10)
    {
        state = get(queue, &temp);
        if (state == 0)
        {
            printf("Removido %d\n", temp);
        }
        else
        {
            printf("*** Fila vazia ***\n");
        }
    }
    destroy(queue);
}