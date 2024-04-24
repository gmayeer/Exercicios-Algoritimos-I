#include <stdio.h>
#include <stdlib.h>

void apresentacao();
float ler_valor();
void teste(float n, int *a, int *z);
void resposta(float n, int *a, int *z);

int main(){
    apresentacao();
    int *b = malloc(sizeof(int));
    int *k = malloc(sizeof(int));
    float n = ler_valor();
    teste(n, b, k);
    resposta(n, b, k);
return 0;
}

apresentacao(){
    printf("MESCLAGEM PASSAGME POR VALOR E POR REFERENCIA (VARIAVEIS CONVENCIONAIS E PONTEIROS)\n\n");
}

float ler_valor(){
    float x;
    printf("Digite aqui o valor real n: ");
    scanf("%f", &x);

return x;
}


void teste(float n, int *a, int *z){
    *a = 1;
    *z = n;
}

void resposta(float n, int *a, int *z){
    printf("\n\nOs parâmetros finais são: %.2f (n), %d (b) e %d (k)\n\n", n, *a, *z);
}
