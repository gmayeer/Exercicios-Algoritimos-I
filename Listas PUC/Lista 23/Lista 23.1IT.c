#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

int tamanhoStr(char str[]);

int main(){
    printf("CALCULAR O TAMANHO DE UMA STRING\n\n");
    char str[100];
    printf("Digite aqui um nome aleatório: ");
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
