#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int sequencia(int n, int *s, int *i);

int main() {
  apresentacao();
  //QUANDO SE PEDE PARA PARAMETRIZAR, N�O � NECESS�RIO ALOCAR DIN�MICAMENTE (MALLOC) SOMENTE QUANDO REALMENTE SE PEDE
  int *m = 5;
  int n = 1;
  int *c = 0;
  sequencia(n, &m, &c);
return 0;
}

void apresentacao(){
    printf("Escrever uma sequ�ncia [1,2,3,4,5,5,4,3,2,1] por meio de algoritimo recursivo e limites parametrizados.\n\n");
}

int sequencia(int n, int *s, int *i){
  ++(*i);
  if(*i < 10)
    printf("%i, ", n);
  else
    printf("%i", n);
  if(n < *s && *i < 5){
    //Quando se for referenciar � fun��o a se repercurtida, n�o � necess�rio citar os sinais de PONTEIROS
    n = sequencia(n+1, s, i);
  }
  else if(n == *s && *i == 5){
    n = sequencia(n, s, i);
  }
  else if(*i < 10){
    n = sequencia(n-1, s, i);
  }

return n;
}
