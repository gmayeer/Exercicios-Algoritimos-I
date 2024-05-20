#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float maiorDiag(float M[][NUM_COL], int i);

int main(){
    printf("CALCULAR O MAIOR N�MERO NA DIAGONAL PRINCIPAL DA MATRIZ\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%d� linha | %d� coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado = maiorDiag(M, 0);

    printf("O maior n�mero da diagonal principal da matriz �: %.2f", resultado);
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
//A RECURS�O S� EXECUTA UM COMANDO QUANDO A CHAMADA DA FUN��O REALMENTE TIVER UM RETORNO QUE N�O SEJA UMA CHAMADA (ex: return funcao(a, b+1);).
//EX: A VARIAVEL MAIOR S� VAI SER ATUALIZADA UMA VEZ QUE O i ATINGIR O CASO BASE DO PRIMEIRO TESTE DA FUN��O (i == NUM_COL)
//A PARTIR DESSA PRIMEIRA ATUALIZA��O DE MAIOR, AS EXECUCOES ESTOCADAS DE i = 1 e i = 2 S�O FEITAS E OS TESTES m[1] e m[2] s�o feitas, retornando (consequentemente atualizando) m[i] ou simplesmente maior no seu caso base
