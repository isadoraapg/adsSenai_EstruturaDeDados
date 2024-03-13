#include <stdlib.h>
#include "stack.h"

struct Stack_{
    int *elements;
    int length;
    int size;

};

//cria o espaço de memória; prepara a estrutura pra uso;
Stack *create(int length){
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    stack->elements = (int *) malloc(sizeof(int) * length);
    stack->length = length;
    stack->size = 0;

    return stack;
}   

//consultar o elemento do topo
int peek(Stack *stack, int *value){
    if(stack->size == 0){
        return 1;
    }
    *value = stack->elements[stack->size - 1];
    return 0;
}

//insere no topo da pilha
int push(Stack *stack, int value){
    if(stack->size == stack->length){
        return 1;
    }
    stack->elements[stack->size++] = value;
    return 0;
}

//remove no topo da pilha
int pop(Stack *stack, int *value){
    if(stack->size == 0){
        return 1;
    }
    
    stack->size--;
    *value = stack->elements[stack->size];
    return 0;
} 


int size(Stack *stack);        

// informa se a pilha está cheia
int is_full(Stack *stack){
   if(stack->size == stack->length) {
    return 0;
   }
   return 1;
}

int is_empty(Stack *stack);  

void destroy(Stack *stack);  
       