#include <stdio.h>
#include <stdlib.h>

int main(){
  //1)

  printf("\nDADOS DA TURMA 1");
  int alunos;
  do{
    printf("\n\nDigite aqui a quantidade de alunos na turma: ");
    scanf("%i", &alunos);
  }while(alunos < 0);
  char genero;
  int idade;
  int i;
  int machos = 0;
  int femeas = 0;
  int maior = 0;
  int menor = 0;
  int maisv;
  int maisn;
  
  for(i = 1; i <= alunos; i++){
    do{
      printf("\nDigite aqui o gênero do %iº aluno (m/f): ", i);
      scanf(" %c", &genero);
    }while(genero != 'm' && genero != 'f');
    
    if(genero == 'm')
    ++machos;
    if(genero == 'f')
    ++femeas;
    //(NAO ENTENDI O PORQUE USAR ++ ANTES)
    
    do{
      printf("\nDigite aqui a idade do %iº aluno: ", i);
      scanf(" %i", &idade);   
    }while(idade < 0 || idade > 100);
    
    if(idade < 18)
      ++menor;
    if(idade >= 18)
      ++maior;

    if(maisv < idade)
      idade = maisv;
    if(maisn > idade)
      idade = maisn;
  } 
  float percent_m;
  percent_m = ((float)machos / (float)alunos) * 100;
  printf("\n\nA porcentagem de alunos do gênero masculino na turma 1 é de %.2f%%", percent_m);
  float percent_f;
  percent_f = ((float)femeas / (float)alunos) * 100;
  printf("\nA porcentagem de alunos do gênero feminino na turma 1 é de %.2f%%", percent_f);
  float percent_maior;
  percent_maior = ((float)maior / (float)alunos) * 100;
  printf("\nA porcentagem de alunos maiores de idade na turma 1 é de %.2f%%", percent_maior);
  float percent_menor;
  percent_menor = ((float)menor / (float)alunos) * 100;
  printf("\nA porcentagem de alunos menores de idade na turma 1 é de %.2f%%", percent_menor);

  
  //2)
  printf("\n\nRELATÓRIO DA TURMA 2");

  int alunos2;
  int i2;
  float nota;
  float soma_nota;
  float nota_media;
  int aprovado = 0;
  int reprovado = 0;

  do{
    printf("\n\nDigite aqui a quantidade de alunos na turma: ");
    scanf("%i", &alunos2);
  }while(alunos2 < 0);
  for(i2 = 1; i2 <= alunos2; i2++){
    do{
      printf("\n\nDigite aqui a nota do %iº aluno: ", i2);
      scanf("%f", &nota);
    }while(nota > 100 || nota < 0);
    soma_nota = nota + soma_nota;
    if(nota < 60) {
      printf("Reprovado!");
      reprovado = reprovado + 1;
        }
    if(nota >= 60) {
      printf("Aprovado!");
      aprovado =  aprovado + 1;
    }
  }
  float porcent_reprov;
    porcent_reprov = (float) reprovado / (float) alunos2 * 100;
  float porcent_aprov;
    porcent_aprov = (float) aprovado / (float) alunos2 * 100;

  printf("\n\nA porcentagem de alunos aprovados foi de %.0f%%", porcent_aprov);
  printf("\nA porcentagem de alunos reprovados foi de %.0f%%", porcent_reprov);
  nota_media = soma_nota / alunos2;
  printf("\nA nota média dos alunos foi: %.2f", nota_media);

//3)
  printf("\n\n\nPROGRESSÃO GEOMÉTRICA");
  
  int i3;
  int H = 1;
  int n;
/*  
  float H = 1;
  int ii3;
  do{
    printf("\n\nDigite aqui o número n de termos para fazer uma progressão: ");
    scanf("%i", &n);
  }while(n<1);

  for(i3 = 1; i3 <= n; i3++){
    if(i3 > 1)
      for(ii3 = 1; ii3 <= n; ii3 * 3){
      H = ((float) 1 / (3 * ii3) + 1);
      }
    if(i3 == 1)
      H = 1;
  }
  printf("\nO valor de H é: %.2f", H);
*/ // TENTATIVA DE MACHO ACIMA
  do{
    printf("\n\nDigite aqui o número n de termos para fazer uma progressão de regra 1/3*3*n: ");
    scanf("%i", &n);
  }while(n<1);

  for(i3 = 1; i3 <= n; i3++){
    H = H * 3;
  }
//????????????????/
  printf("\nO valor de H é: 1/%i", H);
//4)
  printf("\n\n\nTERMOS DE FIBONACCI");

  int i4;
  int n4;
  int termo = 0;
  int termo_anterior = 1;
  do{
    printf("\n\nDigite aqui o número n (inteiro positivo) de termos da sequência de Fibonacci a serem escritos: ");
    scanf("%i", &n4);
  }while(n4 < 0);
  for(i4 = 1; i4 <= n4; i4++){
    if(i4 == 1 || i4 == 2){
      termo = 1;
      printf("%iº termo: %i\n", i4, termo);
    }
    if(i4 > 2){
    int proximo_termo = termo + termo_anterior;
    termo_anterior = termo;
    termo = proximo_termo;
    printf("%iº termo: %i\n", i4, termo);
    }
  }
  
return 0;
}