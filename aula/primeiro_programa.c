#include <stdio.h> //print
#include <limits.h> //da variaveis globais e me detalha um pouco mais sobre o tamanho do tipo de dado

int main(){

    printf("------------------\n");
    printf(" - inteiro minimo: %d | inteiro maximo: %d\n", INT_MIN, INT_MAX);
    printf(" - inteiro sem sinal maximo: %u\n", UINT_MAX);
    printf(" - numeros de bit por byte: %d\n", CHAR_BIT);
    printf(" - char minimo: %d : char maximo: %d\n", CHAR_MIN,CHAR_MAX);
    printf("------------------\n");


//tipos de dados:
//primitivos (nativo, tipo mais básico q tem na linguagem): 
    char vchar; //carater - uma letra
    int vint; //inteiro
    double vdouble;
    float vfloat;
    //modificadores (ajustar o tamanho do uso da memoria):
    short int vshortint;
    long int vlongint; 
    long double vlongdouble;
    //boolean não existe no C, pq não julgam necessario um true ou false;

    printf("Tamanhos\n");
    printf(" - char: %lu\n", sizeof vchar);
    printf(" - int: %lu\n", sizeof vint);
    printf(" - double: %lu\n", sizeof vdouble);
    printf(" - float: %lu\n", sizeof vfloat);
    printf(" - short int: %lu\n", sizeof vshortint);
    printf(" - long int: %lu\n", sizeof vlongint);
    printf(" - longdouble: %lu\n", sizeof vlongdouble);

    //palavra reservada: palavra q exeste no compilador e q não vai poder ser usada no código... ex: int (palavras coloridas)

    

    return 0; //toda função retorna algo, nem que seja zero (qnd inicia int, ao retornar 0 = sucesso)
}