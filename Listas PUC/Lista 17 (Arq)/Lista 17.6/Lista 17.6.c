#include <stdio.h>
#include <string.h>


int main(){
    printf("CONFERIR SENHA\n\n\n");

    int op;
    printf("Tecle 1 para CADASTRAR SUA SENHA\nTecle 2 para VALIDAR SUA SENHA\nTecle 0 para SAIR DO PROGRAMA\n--> ");
    scanf("%d", &op);


    char senha[11];
    char senhatry[11];
    if(op == 1){
        FILE*f = fopen("senha.txt", "wt");
            printf("\nDigite aqui qual será a sua senha (MÁXIMO DE 10 CARACTERES): ");
            scanf("%s", senha);

            fprintf(f, "%s", senha);
        fclose(f);
    }

    if(op == 2){
        printf("\nDigite é a sua senha (MÁXIMO DE 10 CARACTERES): ");
        scanf("%s", senhatry);

        FILE*f = fopen("senha.txt", "r");
            fscanf(f, "%10s", senha);
        fclose(f);

        if(strcmp(senha, senhatry) == 0)
            printf("\nSENHA CORRETA");
        else
            printf("\nSENHA INCORRETA");
    }

    if(op == 0){
        printf("\nVolte sempre!\n\n");
        return 0;
    }
return 0;
}
