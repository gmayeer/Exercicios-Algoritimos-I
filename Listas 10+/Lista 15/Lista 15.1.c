#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int sequencia(int n, int m);

int main() {
  int m = 5;
  int n = 1;
  sequencia(n, m);
return 0;
}

void apresentacao(){
    printf("Escrever uma sequência [1,2,3,4,5] por meio de algoritimo recursivo.\n\n");
}

int sequencia(int n, int m){
  int soma;
  if(n == 5)
    printf("%i", n);
  else
    printf("%i, ", n);
  if(n < m){
    n = sequencia(n+1, m);
  }
  else
    soma = n;

return n;
}

