#include <stdio.h>

float diasMes(int mes);

int main(){
    printf("N�MERO DE DIAS DO M�S(ARRAY)\n\n");
    float V[31];
    int mes;
    do{
    printf("\nDigite aqui o n�mero do m�s: ");
    scanf("%d", &mes);
    if(mes > 12 || mes < 1)
        printf("M�s inv�lido, digite novamente.");
    }while(mes > 12 || mes < 1);
    int resultado = diasMes(mes);

    printf("O m�s inserido possui: %d dias!", resultado);
return 0;
}

float diasMes(int mes){
    int dias;
    //COMO COLOCA VETOR NESSA QUEST�O KKKKKKKKK
    if(mes % 2 == 0){
        if(mes < 7)
            dias = 30;
        else
            dias = 31;
        if(mes == 2)
            dias = 28;
    }
    else{
        if(mes <= 7)
            dias = 31;
        else
            dias = 30;
    }
    return dias;
}

