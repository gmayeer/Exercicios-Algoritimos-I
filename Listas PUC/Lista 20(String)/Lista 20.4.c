#include <stdio.h>

void concatStr(char str1[], char str2[], char str3[]);

int main(){
    printf("CONCATENANDO STRINS\n\n");

    char str1[50];
    printf("Digite aqui uma palavra aleatório: ");
    scanf("%s", str1);

    char str2[50];
    printf("\nDigite aqui uma palavra aleatório: ");
    scanf("%s", str2);

    char str3[100];

    concatStr(str1, str2, str3);

    printf("\n\nA concatenação das duas strings é: %s", str3);//É possível printar strings a partir de %s

return 0;
}


void concatStr(char str1[], char str2[], char str3[]){
    int i = 0;
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    int j = 0;
    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0'; //Necessário lembrar de ao CRIAR uma string, inserir o caracter de finalizacao '\0'
}
