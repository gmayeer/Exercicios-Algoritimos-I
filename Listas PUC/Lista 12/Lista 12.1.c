#include <stdio.h>

/*Previsão do OUTPUT: 2
                      5*/

void troca(int *x, int *y);

int main(){
    int a = 5, b = 2;
    troca(&a, &b);
    printf("\n%i\n%i", a, b);
return 0;
}

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
