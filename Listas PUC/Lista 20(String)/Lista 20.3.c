#include <stdio.h>
//ESSE EXERCICIO AMOSTRA A EXISTENCIA DA VOGAL NA STRING INSERIDA, MAS EM ORDEM (??????? KKKKK)
void vetorVogais(char str[], int vog[]);

int main(){
    printf("VOGAIS EM UMA STRING\n\n");
    char str[100];
    printf("Digite aqui uma palavra aleatório: ");
    scanf("%s", str);

    int vog[5];
    vetorVogais(str, vog);

    printf("{");
    for(int i = 0; i < 5; i++)
        printf("%d|", vog[i]);
    printf("}");
return 0;
}

//FIZ PARA QUE A VOGAL A COMECASSE VALENDO 1, NÃO 0 (ESTÉTICO)
void vetorVogais(char str[], int vog[]){
    int i = 0;
    for(int j = 0; j < 5; j++){
        vog[j] = 0;
    }
    while(str[i] != '\0'){
        if(str[i] == 'a')
            vog[0] = 1;
        if(str[i] == 'e')
            vog[1] = 2;
        if(str[i] == 'i')
            vog[2] = 3;
        if(str[i] == 'o')
            vog[3] = 4;
        if(str[i] == 'u')
            vog[4] = 5;
        i++;
    }
}
