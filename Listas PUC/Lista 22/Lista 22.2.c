#include <stdio.h>
//QUEST�O T�PICA DE PROVA

int numeroOcorrencias(float M[][3], float chave);

int main(){
    printf("N�MERO DE OCORR�NCIAS EM UM MATRIZ\n\n");


    float M[3][3] = {1.15, 2.25, 5.90, 2.25, 7.5, 3.3, 9.1, 2.92, 15.15};
    float chave = 2.25;

    int ocor = numeroOcorrencias(M, chave);
    printf("O n�mero de ocorr�ncias da chave na matriz �: %d", ocor);
return 0;
}


int numeroOcorrencias(float M[][3], float chave){
    int c = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                if(M[i][j] == chave){
                    c++;
                }
        }
    }

    return c;
}
