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
    printf("CÁLCULO DE SALÁRIO LÍQUIDO A PARTIR DO INSS E VALE TRANSPORTE\n\n");
}


float ler_sal(){
    float sb;
    printf("Digite aqui o salário bruto do funcionário: ");
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
    printf("\n\nA contribuição do INSS equivalente ao salário é: %.2f\n", *d);
    printf("O vale transporte equivalente ao salário é: %.2f\n\n", *i);
    printf("O salário líquido do fucionário é: %.2f", sal_liquido);
}
