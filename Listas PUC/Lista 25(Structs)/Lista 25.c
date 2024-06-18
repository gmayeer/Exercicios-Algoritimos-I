#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int TAM = 10;

typedef struct Pessoa {
    char nome[50];
    int idade;
}Pessoa;

int menu(){
    printf("ESTUDANDO STRUCTS\n\n");
    int x;
    printf("\n\nMENU\n");
    printf("Tecle 1 para cadastrar alunos\nTecle 2 para listar os alunos cadastrados\nTecle 3 para informar a idade média dos alunos cadastrados\nTecle 0 para sair do programa\n->");
    scanf("%d", &x);
    return x;
}

void cadastrarAlunos(Pessoa p[]){
    for(int i = 0; i < TAM; i++){
        printf("\nDigite aqui o nome do %dº aluno: ", i+1);
        scanf("%s", p[i].nome);
        printf("\nDigite aqui a idade do %dº aluno: ", i+1);
        scanf("%d", &p[i].idade);
    }
}

void listarAlunos(Pessoa p[]){
    for(int i = 0; i < TAM; i++){
        printf("\n\nAluno %d\nNome: %s\nIdade: %d", i+1, p[i].nome, p[i].idade);
    }
}

void mediaIdades(Pessoa p[]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        soma += p[i].idade;
    }
    float media = (float)soma/TAM;
    printf("\n\nA idade média da turma é: %.2f", media);
}

int main(){
    Pessoa p[TAM];
    int escolha;
    while(escolha != 0){
        escolha = menu();
        if(escolha == 1)
            cadastrarAlunos(p);
        if(escolha == 2)
            listarAlunos(p);
        if(escolha == 3)
            mediaIdades(p);
    }
    return 0;
}