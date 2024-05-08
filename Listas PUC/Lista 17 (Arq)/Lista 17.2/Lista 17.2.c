#include <stdio.h>

int main(){
    FILE*p = fopen("exemplo.txt", "w");
        int idade = 30;
        if(p == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    fprintf(p, "O autor tem %d anos.", idade);
    fclose(p);
    printf("Idade escrita com sucesso!");
return 0;
}
