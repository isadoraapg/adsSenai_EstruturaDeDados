#include <stdio.h>
#include <string.h>

int main(){
    char nome_1[] = "Jose Antonio";
    char nome_2[] = {'J', 'o', 's', 'e', ' ', 'A', 'n', 't', 'o', 'n', 'i', 'o', '\0'};
    char nome_3[50];

    int i = 0;
    for (i = 0; i < 13; i++){
        nome_3[i] = nome_1[i];
        printf("%c", nome_3[i]);
    }

int diff;
diff = strcmp(nome_1, nome_2);
if (diff == 0){
    printf("nome_1 e nome_2 sao iguais\n");
}

diff = strcmp(nome_2, nome_3);
if (diff == 0){
    printf("nome_2 e nome_3 sao iguais\n");
}



return 0;
}