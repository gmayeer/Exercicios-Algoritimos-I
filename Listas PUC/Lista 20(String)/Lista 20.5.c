#include <stdio.h>
#include <stdbool.h>

bool compareStr(char str1[], char str2[]);

int main(){
    printf("COMPARANDO STRINGS\n\n");

    char str1[50];
    printf("Digite aqui uma palavra aleatório: ");
    scanf("%s", str1);

    char str2[50];
    printf("\nDigite aqui uma palavra aleatório: ");
    scanf("%s", str2);


    if(compareStr(str1, str2))
        printf("Strings iguais");
    else
        printf("Strings diferentes");

return 0;
}


bool compareStr(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        if(str1[i] != str2[i]){
            return false;
        }
        i++;
    }
return true;
}
