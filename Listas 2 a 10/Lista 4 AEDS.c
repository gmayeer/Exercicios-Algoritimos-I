#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
//1
    printf("ORDEM DE NÚMEROS INTEIROS");
    int x;
    int y;
    int z;
    printf("\n\nDigite aqui um número inteiro; ");
    scanf(" %d", &x);
    printf("\nDigite aqui outro número inteiro; ");
    scanf(" %d", &y);
    printf("\nDigite aqui outro número inteiro; ");
    scanf(" %d", &z);
    printf("\n\n");

    int primeiro;
    int segundo;
    int terceiro;

    if(x != y && y != z && x != z){
        if(x > y && y > z){
            primeiro = x;
            segundo = y;
            terceiro = z;
            printf("O maior número é %d, o segundo é %d e o menor é %d", primeiro, segundo, terceiro);
        }
        else if(x > z && z > y){
            primeiro = x;
            segundo = z;
            terceiro = y;
            printf("O maior número é %d, o segundo é %d e o menor é %d", primeiro, segundo, terceiro);
        }
        else if(y > x && x > z){
            primeiro = y;
            segundo = x;
            terceiro = z;
            printf("O maior número é %d, o segundo é %d e o menor é %d", primeiro, segundo, terceiro);
        }
        else if(y > z && z > x){
            primeiro = y;
            segundo = z;
            terceiro = x;
            printf("O maior número é %d, o segundo é %d e o menor é %d", primeiro, segundo, terceiro);
        }
        else if(z > y && y > x){
            primeiro = z;
            segundo = y;
            terceiro = x;
            printf("O maior número é %d, o segundo é %d e o menor é %d", primeiro, segundo, terceiro);
        }
        else{
            primeiro = z;
            segundo = x;
            terceiro = y;
            printf("O maior número é %d, o segundo é %d e o menor é %d", primeiro, segundo, terceiro);
        }

    }
    else printf("Os números não são todos diferentes.");

//2)
    printf("\n\n\nMINI CALCULADORA: ");
    int operacao;
    float i;
    float j;
    float resultado;

    printf("\n\n1 para adição\n2 para subtração\n3 para multipliação\n4 para divisão real\nDigite aqui a operação desejada: ");
    scanf(" %d", &operacao);

    printf("\nDigite aqui o primeiro número da operação: ");
    scanf(" %f", &i);
    printf("Digite agora o segundo número da operação: ");
    scanf("  %f", &j);

    printf("\n\n");

//USO DO SWITCH NA MINI CALCULADORA
    switch(operacao)
    {
        case 1 : resultado = i + j;
        break;
        case 2 : resultado = i - j;
        break;
        case 3 : resultado = i * j;
        break;
        case 4 : resultado = i / j;
        break;
        default : printf("Insira uma operação válida");
    }
    printf("\nResultado = %.2f", resultado);


//3

    printf("\n\n CÁLCULO DE EQUAÇÃO DO SEGUNDO GRAU:");
    float a;
    float b;
    float c;
    float x1;
    float x2;

    printf("\n\nDigite aqui o coeficiente quadrático (a): ");
    scanf(" %f", &a);
    printf("\n\nDigite aqui o coeficiente linear (b): ");
    scanf(" %f", &b);
    printf("\n\nDigite aqui o coeficiente c: ");
    scanf(" %f", &c);

        float delta;
    delta = pow(b, 2) - 4*a*c;
    if(a != 0 || delta > 0) {
       x1 = -b + pow(delta, 1/2) / 2*a;
       x2 = -b - pow(delta, 1/2) / 2*a;
       printf("\nOs possíveis x de sua função são: %.2f e %.2f", x1, x2);
    }
    else if(a != 0 || delta == 0){
        x1 = -b / 2*a;
        printf("\nO x de sua função são: %.2f", x1);
    }
    else if(a != 0 || delta < 0){
        printf("\nNão existe raiz real para a sua função.");
    }
    else printf("\nCom os coeficientes inseridos, não se pôde formar uma equação do segundo grau.\n\n");
//?????????????????????????//
return 0;
}
