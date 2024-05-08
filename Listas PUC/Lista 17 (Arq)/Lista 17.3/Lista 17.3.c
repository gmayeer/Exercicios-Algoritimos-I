#include <stdio.h>

int main(){
    FILE*p = fopen("exemplo.txt", "w");
        int idade = 18;
        if(p == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    fprintf(p, "O autor tem %d anos.", idade);
    fclose(p);
    printf("Idade escrita com sucesso!");

    int idadepai = 53;
    int idademae = 47;
    fopen("exemplo.txt", "a");
        if(p == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    fprintf(p, "\nO pai e a mãe do autor têm %d e %d anos, respectivamente.", idadepai, idademae);
    fclose(p);
    printf("\nIdades escritas com sucesso!");
return 0;
}
