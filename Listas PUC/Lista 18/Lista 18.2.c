#include <stdio.h>

int main(){
        printf("NOTAS DE ALUNOS(ARRAYS)\n\n\n");

    int alunos;

    printf("Digite aqui a quantidade de alunos na sua turma: ");
    scanf("%d", &alunos);

    float nota[alunos];
    float somanotas = 0;
    float maior;
    float menor;

    for(int i = 1; i <= alunos; i++){
        printf("\nDigite aqui a nota do %dº aluno: ", i);
        scanf("%f", &nota[i]);
        somanotas += nota[i];
        if(nota[i] > nota[i-1])
            maior = nota[i];
        if(nota[i] < nota[i-1])
            menor = nota[i];
    }

    printf("\n\n--> A maior nota da sua turma foi %.2f, enquanto a menor foi %.2f", maior, menor);

    float media = somanotas / (float)alunos;
    printf("\n--> A nota média dos seus alunos é: %.2f", media);

    int acima = 0;

    for(int j = 1; j <= alunos; j++){
        if(nota[j] > media)
            acima++;
    }

    printf("\n--> %d alunos se desempenharam acima da média da turma.", acima);
return 0;
}
