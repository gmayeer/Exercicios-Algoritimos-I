#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
//1
    printf("ORDEM DE N�MEROS INTEIROS");
    int x;
    int y;
    int z;
    printf("\n\nDigite aqui um n�mero inteiro; ");
    scanf(" %d", &x);
    printf("\nDigite aqui outro n�mero inteiro; ");
    scanf(" %d", &y);
    printf("\nDigite aqui outro n�mero inteiro; ");
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
            printf("O maior n�mero � %d, o segundo � %d e o menor � %d", primeiro, segundo, terceiro);
        }
        else if(x > z && z > y){
            primeiro = x;
            segundo = z;
            terceiro = y;
            printf("O maior n�mero � %d, o segundo � %d e o menor � %d", primeiro, segundo, terceiro);
        }
        else if(y > x && x > z){
            primeiro = y;
            segundo = x;
            terceiro = z;
            printf("O maior n�mero � %d, o segundo � %d e o menor � %d", primeiro, segundo, terceiro);
        }
        else if(y > z && z > x){
            primeiro = y;
            segundo = z;
            terceiro = x;
            printf("O maior n�mero � %d, o segundo � %d e o menor � %d", primeiro, segundo, terceiro);
        }
        else if(z > y && y > x){
            primeiro = z;
            segundo = y;
            terceiro = x;
            printf("O maior n�mero � %d, o segundo � %d e o menor � %d", primeiro, segundo, terceiro);
        }
        else{
            primeiro = z;
            segundo = x;
            terceiro = y;
            printf("O maior n�mero � %d, o segundo � %d e o menor � %d", primeiro, segundo, terceiro);
        }

    }
    else printf("Os n�meros n�o s�o todos diferentes.");

//2)
    printf("\n\n\nMINI CALCULADORA: ");
    int operacao;
    float i;
    float j;
    float resultado;

    printf("\n\n1 para adi��o\n2 para subtra��o\n3 para multiplia��o\n4 para divis�o real\nDigite aqui a opera��o desejada: ");
    scanf(" %d", &operacao);

    printf("\nDigite aqui o primeiro n�mero da opera��o: ");
    scanf(" %f", &i);
    printf("Digite agora o segundo n�mero da opera��o: ");
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
        default : printf("Insira uma opera��o v�lida");
    }
    printf("\nResultado = %.2f", resultado);


//3

    printf("\n\n C�LCULO DE EQUA��O DO SEGUNDO GRAU:");
    float a;
    float b;
    float c;
    float x1;
    float x2;

    printf("\n\nDigite aqui o coeficiente quadr�tico (a): ");
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
       printf("\nOs poss�veis x de sua fun��o s�o: %.2f e %.2f", x1, x2);
    }
    else if(a != 0 || delta == 0){
        x1 = -b / 2*a;
        printf("\nO x de sua fun��o s�o: %.2f", x1);
    }
    else if(a != 0 || delta < 0){
        printf("\nN�o existe raiz real para a sua fun��o.");
    }
    else printf("\nCom os coeficientes inseridos, n�o se p�de formar uma equa��o do segundo grau.\n\n");
//?????????????????????????//
return 0;
}
