#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define FLAG 0

int main(){
    int alunos = 0;
    int idade;
    int somaidade = 0;
    float media;
    int acima = 0;

    FILE *f = fopen("idade.txt", "w");

        printf("ESTUDO DAS IDADES DOS ALUNOS\n\n\n");

        while(alunos == FLAG){
            alunos++;
            printf("\nDigite aqui a idade do %dº aluno [pressione 0 para encerrar]", alunos);
            scanf("%d", &idade);
            fprintf(f, "\nIdade do %dº aluno: %d", idade);
            somaidade += idade;
        }
    media = (float)somaidade / (alunos - 1);
    fclose(f);

    fopen("idade.txt", "r");
        while(fscanf(f, "Idade do %*dº aluno: %d", &idade) == 1){
            if(idade > media)
                acima++;
        }
    fclose(f);

    fopen("idade.txt", "a");
        fprintf(f, "Existem %d alunos acima da média.", acima);
    fclose(f);
return 0;
}
