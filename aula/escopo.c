#include <stdio.h>
#include <limits.h>

int global = 111;

void funcao(){
    printf("[FUNCAO] endereco: %p - valor: %d\n", &global, global);
}

int main(){
    printf("[MAIN 01] endereco: %p - valor: %d\n", &global, global);
    int global = 222;
    printf("[MAIN 02] endereco: %p - valor: %d\n", &global, global);
    int i = 1;
    while(i > 0){
        i--;
        printf("[WHILE 01] endereco: %p - valor: %d\n", &global, global);
        int global = 333;
        printf("[WHILE 02] endereco: %p - valor: %d\n", &global, global);
    }
    funcao();
    return 0;
}