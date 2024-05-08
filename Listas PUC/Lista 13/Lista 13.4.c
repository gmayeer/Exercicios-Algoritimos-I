#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
void apresentacao();
int ler_m();
bool ser_primo(int m);
void primo(int m, int *x, int *y);
void resposta(int *x, int *y);

int main(){
    apresentacao();
    int *p1 = malloc(sizeof(int));
    int *p2 = malloc(sizeof(int));
    int m = ler_m();
    primo(m, p1, p2);
    resposta(p1, p2);
return 0;
}

apresentacao(){
    printf("MESCLAGEM PASSAGME POR VALOR E POR REFERENCIA (VARIAVEIS CONVENCIONAIS E PONTEIROS)\n\n");
}

int ler_m(){
    int d;
    printf("Digite aqui o valor m para descobrir o maior primo menor que ele, e o menor primo maior que ele: ");
    scanf("%d", &d);
return d;
}

bool ser_primo(int m){
   int cont = 0;
   for(int i = 1; i <= m; i++){
        if(m % i == 0)
            cont++;
   }
   if(cont == 2)
        return true;
   else
        return false;
}

void primo(int m, int *x, int *y){
    *x = m;
    *y = m;

    while(!ser_primo(*y)){
        (*y)++;
    }

    while(!ser_primo(*x)){
        (*x)--;
    }
}
void resposta(int *x, int *y){
    printf("O maior primo menor que m é: %d\nO menor primo maior que m é: %d", *x, *y);
}
