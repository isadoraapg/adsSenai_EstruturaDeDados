#include <stdio.h>
#include "empregado.h"

int main(){
    struct empregado *e = get_empregado();
    set_nome(e, "Jose Pedro");
    //set_cpf(e, 123456);
    //set_salario(e, 3500);

    printf("Nome: %s\n", get_nome(e));
    return 0;
}

