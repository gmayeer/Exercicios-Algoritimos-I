#include <stdio.h>

int vogais(char str[]);

int main(){
    printf("VOGAIS EM UMA STRING\n\n");
    char str[100];
    printf("Digite aqui uma palavra aleatório: ");
    scanf("%s", str);

    printf("A string inserida tem %d vogais", vogais(str));
return 0;
}

int vogais(char str[]){
    int i = 0;
    int vogal = 0;
    while(str[i] != '\0'){
        i++;
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vogal++;
    }

return vogal;
}
