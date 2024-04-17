#include <stdio.h>
#include <string.h>

int main(){

    struct cliente{
        char nome[50];
        double cpf;
        double telefone;
    };
    
struct cliente e;
strcpy(e.nome, "Maria Joana");
e.cpf = 12345678999;
e.telefone = 123456789;
printf("Nome: %s\n Telefone: %.0f\n CPF: %.0f\n", e.nome, e.telefone, e.cpf);

    return 0;
}