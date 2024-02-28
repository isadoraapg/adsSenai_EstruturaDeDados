#include <stdio.h>
#include <limits.h>

int main(){

     int a; 
     int *p; //variavel tipo ponteiro (guarda endereço de memoria)

     p = &a; //variavel p receba o endereço de a (o p vai receber o valor de a)
     a = 10;

    printf("a = %d\n", *p);

    *p = 20;
    printf("a = %d\n", a);
    



    return 0;
}