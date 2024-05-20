#include <stdio.h>
#include <stdbool.h>

const int MAX = 3;
bool pesquisaVetor(float V[][MAX], float chave);

int main(){
    printf("PESQUISA DE CHAVE EM MATRIZ LIDA\n\n");
    float V[MAX][MAX];

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            printf("\n%dª linha e %dª coluna: ", (i+1), (j+1));
            scanf("%f", &V[i][j]);
        }
    }

    float chave = 69.69;
    bool resultado = pesquisaVetor(V, chave);

    if(resultado)
        printf("\nA chave existia na matriz");
    else
        printf("\nA chave não existia na matriz");
return 0;
}

bool pesquisaVetor(float V[][MAX], float chave){
    bool encontro = false;
    int i = 0, j = 0;

    while(!encontro && i < MAX){
        while(!encontro && j < MAX){
            if(V[i][j] == chave){
                encontro = true;
            }
            j++;
        }
        j = 0; //COMO FOI USADO O WHILE, ELE NÃO LIDA AUTOMATICAMENTE COM O REINICIO DA ITERACAO DAS COLUANS, ENTAO FOI NECESSARIO ZERAR O J A CADA CHECAGEM DE LINHA
        i++;    //ENTRETANTO RECOMENDADO USAR NORMALMENTE O FOR
    }

    return encontro;
}
