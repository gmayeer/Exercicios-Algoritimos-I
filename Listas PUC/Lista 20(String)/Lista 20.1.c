#include <stdio.h>

int tamanhoStr(char str[]);

int main(){
    printf("CALCULAR O TAMANHO DE UMA STRING\n\n");
    char str[100];
    printf("Digite aqui uma palavra aleatória: ");
    scanf("%s", str);

    int resultado = tamanhoStr(str);

    printf("A string inserida tem %d caracteres", resultado);
return 0;
}

int tamanhoStr(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
return i;
}
