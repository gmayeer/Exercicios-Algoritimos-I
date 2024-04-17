#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

//1)
  int numero, i;
  bool primo = true;
  do{
    printf("Digite aqui um número natural: ");
    scanf("%i", &numero);
  }while(numero < 0 );

  for(i = 2; i <= numero/2; i++){
    if(numero % i == 0){
      primo = false;
    }
  }

  if(primo)
    printf("O número é primo.");
  else
    printf("O número não é primo");

//2)
  int n, valor, j, maior_par = 0, maior_impar = 1;
  printf("\n\nDigite aqui o número de valores naturais a serem inseridos: ");
  scanf("%i", &n);
  char end;

  do{
    for(int j = 1; j <= n; j++){
     printf("%iº valor: ", j);
     scanf("%i", &valor);

      if(valor % 2 == 0 && valor > maior_par)
        maior_par = valor;
      if(valor % 2 != 0 && valor > maior_impar)
        maior_impar = valor;
    }
    printf("\n\nPressione \"C\" para continuar a registrar números e \"S\" para    encerrar o programa: \n");
    scanf(" %c", &end);

    if(end == 'C' || end == 'c'){
      printf("\n\nDigite aqui o número de valores naturais a serem inseridos: ");
      scanf("%i", &n);
    }
  }while(end == 'C' || end == 'c');

  printf("\nO maior número par dos números inseridos é: %i", maior_par);
  printf("\nO maior número impar dos números inseridos é: %i\n\n\n", maior_impar);


//3)
  int k, termos, divid_inicial, divis_inicial;
  termos = 10;
  divid_inicial = 1;
  divis_inicial = 1;
  int divid_pares, divis_pares;
  int divid_impares, divis_impares;
  for(k = 1; k <= termos; k++){
    if(k == 1){
      divid_impares = divid_inicial * 10;
      divis_impares = divis_inicial * 100;
      printf("\n%i / %i", divid_impares, divis_impares);
    }

    if(k == 2){
      divid_pares = divid_inicial * 100 - 1;
      divis_pares = divis_inicial * 10 + 1;
      printf("\n%i / %i", divid_pares, divis_pares);
    }
    if(k % 2 == 0 && k > 2){
      divid_pares = divid_pares - 2;
      divis_pares = divis_pares + 2;
      printf("\n%i / %i", divid_pares, divis_pares);
    }
    else if(k > 2){
      divid_impares = divid_impares + 2;
      divis_impares = divis_impares - 2;
      printf("\n%i / %i", divid_impares, divis_impares);
    }
  }

//4)
  int a, divisores, x;
  printf("\n\n\nDigite um número inteiro para descobrir a quantidade de divisores que ele tem: ");
  scanf("%i", &a);

  for(x = 1; x <= a; x++){
    if(a % x == 0){
      divisores++;
    }
  }
  divisores = divisores + 1;
  printf("\nO número inserido tem %i divisores", divisores);
  return 0;
}
