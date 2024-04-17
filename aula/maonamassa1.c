#include <stdio.h>
#include <string.h>

//void copiarString(char *destino, char *origem){
//    strcpy(destino, origem);
//}

//int compararString(char *string1, char *string2){
//    return strcmp(string1, string2);
//}

int main(){

char string1[] = "Mao na massa";  
char string2[13], i;

    //copiar string
    printf("string1 : %s\n", string1);
  
    for (i = 0; string1[i] != '\0'; ++i) {
        string2[i] = string1[i];
    }

    string2[i] = '\0';
    printf("String s2 : %s", string2);


    //comparar string
    int diff = 0;
     while (*string1 == *string2) {
        if (*string1 == '\0') {
            
        }else if ((*string1 == '\0' && *string2 != '\0') || (*string1 != '\0' && *string2 == '\0') || (*string1 != *string2)) {
            diff = 1;
            printf("Sao diferentes\n");
            break;
        }
     }

     if (diff == 0) {
        printf("Sao iguais\n");
    }



    return 0;
}



 //   copiarString(string2, string1);
 //   printf("String copiada: %s\n", string2);

 //   if (compararString(string1, string2) == 0){
 //       printf("Sao iguais\n");
 //   }else{
//        printf("Sao diferentes");
//    }

 //   return 0;