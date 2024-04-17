#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define TAMANHONOME 50

struct empregado{
    char nome[TAMANHONOME];
    double cpf;
    double salario;
};

struct empregado *get_empregado(){
    return (struct empregado *) malloc (sizeof (struct empregado));
}

void set_nome (struct empregado *e, char *nome){
    int tamanho = strlen (nome);
    if(tamanho > TAMANHONOME){
        nome[TAMANHONOME -1] = '\0';
    }
    strcpy(e-> nome, nome);
}

char *get_nome(struct empregado *e){
    return e-> nome;
}