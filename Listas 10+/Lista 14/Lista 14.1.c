#include <stdio.h>

void apresentacao();
float ler_sal();
float retorn_liq(float sal_bruto, float *i, float *d);
void resposta(float sal_liquido, float *i, float *d);

int main(){
    apresentacao();
    float sal_bruto = ler_sal();
    float *inss = malloc(sizeof(float));
    float *trans = malloc(sizeof(float));
    float sal_liquido = retorn_liq(sal_bruto, trans, inss);
    resposta(sal_liquido, trans, inss);
return 0;
}

void apresentacao(){
    printf("C�LCULO DE SAL�RIO L�QUIDO A PARTIR DO INSS E VALE TRANSPORTE\n\n");
}


float ler_sal(){
    float sb;
    printf("Digite aqui o sal�rio bruto do funcion�rio: ");
    scanf("%f", &sb);

return sb;
}


float retorn_liq(float sal_bruto, float *i, float *d){
    float sl;
    *i = (sal_bruto / 100) * 6;
    *d = (sal_bruto / 100) * 9;
    sl = sal_bruto - *d + *i;
return sl;
}

void resposta(float sal_liquido, float *i, float *d){
    printf("\n\nA contribui��o do INSS equivalente ao sal�rio �: %.2f\n", *d);
    printf("O vale transporte equivalente ao sal�rio �: %.2f\n\n", *i);
    printf("O sal�rio l�quido do fucion�rio �: %.2f", sal_liquido);
}
