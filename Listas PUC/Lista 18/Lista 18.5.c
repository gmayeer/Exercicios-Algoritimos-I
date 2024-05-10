#include <stdio.h>

int main(){
        printf("NOTAS DE ALUNOS(ARRAYS)\n\n\n");

    int alunos = 0;

    float nota[alunos];
    float somanotas = 0;
    float maior;
    float menor;
    int i = 0;
    nota[i] = 0;
    do{
        i++;
        printf("Digite aqui a nota do %dº aluno[DIGITE ALGUM VALOR NEGATIVO PARA PARAR]: ", i);
        scanf("%f", &nota[i]);
        if(nota[i] >= 0){
            somanotas += nota[i];
            if(nota[i] > nota[i-1])
                maior = nota[i];
            if(nota[i] < nota[i-1])
                menor = nota[i];
            alunos++;
        }
    }while(nota[i] >= 0);

    printf("\n\n--> A maior nota da sua turma foi %.2f, enquanto a menor foi %.2f", maior, menor);

    float media = somanotas / (float)alunos;
    printf("\n--> A nota média dos seus alunos é: %.2f", media);

    int acima = 0;
    float acimas[alunos];
    float menoraprov;
    int aprovs = 0, reprovs = 0;

    for(int j = 1; j <= alunos; j++){
        if(nota[j] > media)
            acima++;
        if(nota[j] >= 60){
            menoraprov = nota[j];
            aprovs++;
        }
        else
            reprovs++;
        if(nota[j] < menoraprov && nota[j] >= 60)
            menoraprov = nota[j];
    }

    float percaprov = (aprovs * 100) / (float)alunos;
    float percreprov = (reprovs * 100) / (float) alunos;

    printf("\n--> %d alunos se desempenharam acima da média da turma.", acima);

    printf("\n--> A menor nota acima da média foi: %.2f", menoraprov);

    printf("\n--> A porcentagem de aprovados foi: %.2f", percaprov);

    printf("\n--> A porcentagem de reprovados foi: %.2f", percreprov);
return 0;
}
