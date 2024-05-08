#include <stdio.h>
#include <stdlib.h>
int main() {

  //Parte I PRINT
  printf("Bucetada\n\n\n");
  
  //Parte II VARIAVEIS
  //ex)
  float base = 5.5;
  float altura = 4.5;
  float areaA = base * altura / 2;

  printf("Um triangulo de base igual a %.1f\n", base);
  printf("E que possui altura igual a %.1f\n", altura);
  printf("Conta com uma área total de %.1f\n", areaA);

  //1)
  int lado = 7;
  int perimetro = lado * 4;

  printf("\n\n\n\nUm quadrado de lado %i possui um perímetro de %i", lado, perimetro);

  //2)
  float raioA = 4.5;
  float areaB = raioA * raioA * 3.14;
  printf("\n\n\nUm círculo de raio %.1f possui uma área de %.1f", raioA, areaB);

  //3)
  float tempC1 = 37.777777;
  float tempF1 = tempC1 * 1.8 + 32;

  printf("\n\n\nSe a temperatura está em %.1f graus celsius, ela está em %.1f graus fahrenheit", tempC1, tempF1);

  //4)
  float estaturaA = 1.67;
  float pesoA = (72.7 * estaturaA) - 58;

  printf("\n\n\nO peso ideal para a minha altura de %.2f metros, é %.1f quilos", estaturaA, pesoA);
  
  //Parte III SCANF
  //ex)
  printf("\n\n\n\n\nSOMA DE 2 NUMEROS\n\n");

  printf("Digite o 1o valor: ");
  float A;
  scanf("%f", &A);

  printf("Digite o 2o valor: ");
  float B;
  scanf("%f", &B);

  float SOMA = A + B;
  printf("\n\n%.2f + %.2f = %.2f", A, B, SOMA);

  //5)
  float raioB;
  
  printf("\n\n\n\n\nInsira o raio de sua circunferência (em metros) para descobrir a área dela: ");
  scanf("%f", &raioB);
  
  float areaC = raioB * raioB * 3.14;
  printf("\n\nA área da circunferência é: %.2f metros quadrados", areaC);

  //6)
  
  float tempC2;
  printf("\n\n\n\n\nPara saber a temperatura atual em graus Fahrenheit, insira aqui a temperatura em graus celsius: ");
  scanf("%f", &tempC2);
  float tempF2 = tempC2 * 1.8 + 32;
  printf("\n\nEstão fazendo %.1f graus Fahrenheit no momento", tempF2);

  //7 e 8)
  float alturaBh;
  printf("\n\n\n\n\nSe você for um homem, digite aqui sua altura (em metros) para descobrir seu peso ideal, caso contrário, digite qualquer número e passe para o próximo passo: ");
  scanf("%f", &alturaBh);
  float pesoBh = (alturaBh * 72.7) - 58;

  float alturaBm;
  printf("\n\nSe você for uma mulher, digite aqui sua altura em metros para descobrir seu peso ideal, caso contrário, digite qualquer número: ");
  scanf("%f", &alturaBm);
  float pesoBm = (alturaBm * 62.1) - 44.7;

  printf("\n\n\nPeso ideal caso homem: %.2f\nPeso ideal caso mulher %.2f", pesoBh, pesoBm);
    return 0;
}