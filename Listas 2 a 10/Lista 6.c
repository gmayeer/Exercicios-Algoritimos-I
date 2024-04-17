#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("CÁLCULO DE UMA POTENCIAÇÃO\n\n");
  float base;
  int exp;
  printf("Digite a base: ");
  scanf("%f", &base);

  do{
  printf("\n\nDigite o expoente: ");
  scanf("%i", &exp);
  } while(exp<0);

  int x;
  float RESULTADO = 1;

  for ( x = 0 ; x < exp; x++) {
    RESULTADO = RESULTADO * base;
  }
  printf("O resultado é %.1f", RESULTADO);
    return 0;
}
