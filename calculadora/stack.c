#include <stdlib.h>
#include "stack.h"

struct Stack_
{
    int *elements;
    int length;
    int size;
};

Stack *create(int length)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->elements = (int *)malloc(sizeof(int) * length);
    stack->length = length;
    stack->size = 0;
    return stack;
}

int peek(Stack *stack, int *value)
{
    if (stack->size == 0)
    {
        return 1;
    }
    *value = stack->elements[stack->size - 1];
    return 0;
}

int push(Stack *stack, int value)
{
    if (stack->size == stack->length)
    {
        return 1;
    }
    stack->elements[stack->size++] = value;
    return 0;
}

int pop(Stack *stack, int *value)
{
    if (stack->size == 0)
    {
        return 1;
    }
    *value = stack->elements[(stack->size--) - 1];
    return 0;
}

int size(Stack *stack)
{
    return stack->size;
}

int is_full(Stack *stack)
{
    if (stack->size == stack->length)
    {
        return 0;
    }
    return 1;
}

int is_empty(Stack *stack)
{
    if (stack->size == 0)
    {
        return 0;
    }
    return 1;
}

void destroy(Stack *stack)
{
    free(stack->elements);
    free(stack);
}