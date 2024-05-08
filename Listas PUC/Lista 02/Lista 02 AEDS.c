#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano;

    printf("\nDigite aqui algum ano: ");
    scanf("%d", &ano);
    if(ano%4 == 0){
        if(ano%400 == 0){
            printf("\n\nO ano %d é bissexto", ano);
        }
        if(ano%100 == 0){
            printf("\n\nO ano %d não é bissexto", ano);
        }
         else{
            printf("\n\nO ano é bissexto", ano);
        }
    }


  return 0;
}
