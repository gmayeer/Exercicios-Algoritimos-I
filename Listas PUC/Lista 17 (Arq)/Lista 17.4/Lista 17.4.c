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
    fprintf(p, "\nO pai e a m�e do autor t�m %d e %d anos, respectivamente.", idadepai, idademae);
    fclose(p);
    printf("\nIdades escritas com sucesso!");



    int seu, seupai, suamae;
    printf("\nDigite a idade agora a sua idade: ");
    scanf("%d", &seu);

    printf("\nDigite a idade agora a idade do seu pai: ");
    scanf("%d", &seupai);

    printf("\nDigite a idade agora a idade da sua m�e: ");
    scanf("%d", &suamae);


    fopen("exemplo.txt", "a");
        if(p == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    fprintf(p, "\n\nVoc� tem %d anos.\nSeu pai tem %d anos.\n Sua m�e tem %d anos.", seu, seupai, suamae);
    fclose(p);
    printf("\nSuas informa��es foram inscritas com sucesso!");
return 0;
}
