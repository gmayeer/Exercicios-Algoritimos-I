#include <stdio.h>

void concatStr(char str1[], char str2[], char str3[]);

int main(){
    printf("CONCATENANDO STRINS\n\n");

    char str1[50];
    printf("Digite aqui uma palavra aleat�rio: ");
    scanf("%s", str1);

    char str2[50];
    printf("\nDigite aqui uma palavra aleat�rio: ");
    scanf("%s", str2);

    char str3[100];

    concatStr(str1, str2, str3);

    printf("\n\nA concatena��o das duas strings �: %s", str3);//� poss�vel printar strings a partir de %s

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
    str3[i] = '\0'; //Necess�rio lembrar de ao CRIAR uma string, inserir o caracter de finalizacao '\0'
}
