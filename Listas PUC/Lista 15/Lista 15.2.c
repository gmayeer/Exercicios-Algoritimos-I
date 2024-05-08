#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int sequencia(int n, int m, int c);

int main() {
  apresentacao();
  int m = 5;
  int n = 1;
  int c = 0;
  sequencia(n, m, c);
return 0;
}

void apresentacao(){
    printf("Escrever uma sequência [1,2,3,4,5,5,4,3,2,1] por meio de algoritimo recursivo.\n\n");
}

int sequencia(int n, int m, int c){
  ++c;
  if(c < 10)
    printf("%i, ", n);
  else
    printf("%i", n);
  if(n < m && c < 5){
    n = sequencia(n+1, m, c);
  }
  else if(n == m && c == 5){
    n = sequencia(n, m, c);
  }
  else if(c < 10){
    n = sequencia(n-1, m, c);
  }

return n;
}
