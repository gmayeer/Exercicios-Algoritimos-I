#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float maiorDiag(float M[][NUM_COL], int i);

int main(){
    printf("CALCULAR O MAIOR NÚMERO NA DIAGONAL PRINCIPAL DA MATRIZ\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha | %dª coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado = maiorDiag(M, 0);

    printf("O maior número da diagonal principal da matriz é: %.2f", resultado);
return 0;
}

float maiorDiag(float M[][NUM_COL], int i){
    if (i == NUM_COL) {
        return M[0][0];
    }
    else if (i == 0) {
        return maiorDiag(M, i + 1);
    }
    else {
        float maior = maiorDiag(M, i + 1);
        if (M[i][i] > maior) {
            return M[i][i];
        }
        else {
            return maior;
        }
    }
}
//A RECURSÃO SÓ EXECUTA UM COMANDO QUANDO A CHAMADA DA FUNÇÃO REALMENTE TIVER UM RETORNO QUE NÃO SEJA UMA CHAMADA (ex: return funcao(a, b+1);).
//EX: A VARIAVEL MAIOR SÓ VAI SER ATUALIZADA UMA VEZ QUE O i ATINGIR O CASO BASE DO PRIMEIRO TESTE DA FUNÇÃO (i == NUM_COL)
//A PARTIR DESSA PRIMEIRA ATUALIZAÇÃO DE MAIOR, AS EXECUCOES ESTOCADAS DE i = 1 e i = 2 SÃO FEITAS E OS TESTES m[1] e m[2] são feitas, retornando (consequentemente atualizando) m[i] ou simplesmente maior no seu caso base
