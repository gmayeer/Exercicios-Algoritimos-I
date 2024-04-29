#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int ler_k();
void resposta();
int fibonacci_rec(int k);
int fibonacci_it(int k);

int main() {
    apresentacao();
    int k = ler_k();
    int resultadorec = fibonacci_rec(k);
    int resultadoit = fibonacci_it(k);
    resposta(resultadorec, resultadoit);
return 0;
}

void apresentacao(){
    printf("Calcular o k-ésimo termo de Fibonacci, tanto de forma recursiva como de forma iterativa.\n\n");
}

int ler_k(){
    int x;
    printf("Digite aqui o termo de Fibonacci que queres descobrir: ");
    scanf("%i", &x);

return x;
}

int fibonacci_rec(int k){
    if(k == 0 || k == 1)
        return k;
        //PRIMEIRO SE EXCLUI A RECURSÃO NO CASO DOS TERMOS 0 E 1 (1 E 2 FORA DO MUNDO BINÁRIO) POIS NÃO SEGUEM A FÓRMULA AINDA.
    else{
        int t;
        t = fibonacci_rec(k - 1) + fibonacci_rec(k - 2);
        //JÁ AQUI FOI FEITA A RECURSAO DE FORMA QUE: FIBONACCI_REC(x) = FIBONACCI_REC(x - 1) + FIBONACCI_REC(x - 2)
        //Pode-se ler essa fórmula como: o termo é a soma dos dois anteriores, e como nas funcoes x - 1 e x - 2 estão calculados recursivamente os termos respectivos, x será a soma desses dois.
        //Deve-se imaginar começando lá em cima e a verifiação iniciando no caso base, onde k = 2*****
        return t;
    }

}

int fibonacci_it(int k){
    int t;
    if(k == 0 || k == 1)
        return k;
    else{
        int last1 = 1;
        int last2 = 0;
        //ESTAVA TENTANDO RESOLVER SEM A CRIAÇÃO DAS DUAS VARIÁVEIS QUE SEMPRE VIA NOS EXERCÍCIOS DE RECURSÃO.
        //Devido a necessidade da recursão de ter uma variavel contadora, não é possível usar-la como função como utilizamos na recursão, que no caso nos retornava a imagem(termo) para trabalharmos em cima dela
        //Essa imagem(termo) na iteração se torna em duas variaveis declaradas antes do loop e modificadas a cada iteração.
        for(int i = 2; i <= k; i++){
            t = last1 + last2;
            last2 = last1;
            last1 = t;
        }
    }

return t;
}

void resposta(int resultadorec, int resultadoit){
    printf("\n\nTermo calculado com recursão: %d", resultadorec);
    printf("\nTermo calculado com iteração: %d", resultadoit);
}
