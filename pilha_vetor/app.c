#include <stdio.h>
#include "stack.h"

int main()
{
    int temp;
    int state;

    Stack *stack = create(5);
    for (int i = 10; i < 80; i += 10)
    {
        int full = is_full(stack);
        if(full == 0){
            printf("***Pilha cheia***\n");
        }
        state = push(stack, i);
        if (state == 0)
        {
            peek(stack, &temp);
            printf("Topo = %d\n", temp);
        }
        else
        {
            printf("*** Pilha cheia ***\n");
        }
    }
    for (int i = 10; i < 80; i += 10)
    {
        state = pop(stack, &temp);
        if (state == 0)
        {
            printf("Removido %d\n", temp);
        }
        else
        {
            printf("*** Pilha vazia ***\n");
        }
    }
    /*destroy(stack);*/
}