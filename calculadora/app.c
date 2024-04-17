#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

char exibir_menu()
{
    printf("\n");
    printf("Digite uma opcao:\n");
    printf(" A - Incluir valor\n");
    printf(" B - Desfazer ultima inclusao\n");
    printf(" C - Limpar a calculadora\n");
    printf("\n");
    printf(" X - Sair\n");
    printf("\n");
    printf(" Opcao: ");

    char opcao[10];
    fgets(opcao, 10, stdin); /* fgets le o valor de entrada. recebe 3 parametros (variavel, quantidade caracteres, de onde vem esse valor)*/
    printf("\n");

    return opcao[0];
}

void incluir_valor(Stack *stack, int *acumulador)
{
    printf("Insira o valor: ");
    char valor_str[10];          // é um char pq é uma entrada de texto
    fgets(valor_str, 10, stdin); // stdin entrada padrao, no nosso caso é o teclado

    // pra poder converter string em inteiro - strtol
    char *endptr;
    int valor = strtol(valor_str, &endptr, 10);

    int estado = push(stack, valor); // chamando a função push (stack.c) , passo a pilha pra ela e o valor
    if (estado == 0)
    {
        // deu certo, conseguiu guardar na pilha
        *acumulador += valor;
    }
    else
    {
        // deu errado
        printf("Memoria cheia!");
    }
}

void desfazer(Stack *stack, int *acumulador)
{
    // tira o ultimo valor da pilha e no fim mostra pilha vazia
    int valor;
    int estado = pop(stack, &valor);
    if (estado == 0)
    {
        *acumulador -= valor;
    }
    else
    {
        printf("Pilha vazia!");
    }
}

void limpar_calculadora(Stack *stack, int *acumulador)
{
    // destroi a pilha e constroi uma nova
    destroy(stack);
    stack = create(3);

    *acumulador = 0;
}

int main()
{

    printf("=== Calculadora UniSENAI ===\n");
    int acumulador = 0;       // guardar o valor
    Stack *stack = create(3); // ciar a pilha, o numero sao quantas posicoes

    char opcao = exibir_menu();

    while (opcao != 'X')
    {
        if (opcao == 'A')
        {
            incluir_valor(stack, &acumulador); // significa q to passando pra funçao duas variaveis q estao declaradas aqui dentro e nao na funcao. o & é pra indicar onde está na memoria.
        }
        else if (opcao == 'B')
        {
            desfazer(stack, &acumulador);
        }
        else if (opcao == 'C')
        {
            limpar_calculadora(stack, &acumulador);
        }
        else
        {
            printf("Digite uma opcao valida.");
        }
        printf("TOTAL: %d\n", acumulador);
        opcao = exibir_menu();
    }
    printf("Programa encerrado.");

    return 0;
}