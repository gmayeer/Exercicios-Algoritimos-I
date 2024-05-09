#include <stdio.h>
#include <limits.h>
#define FLAG 0
float calculo(FILE*f);

int main(){
    printf("\nAMPLITUDE DE UM CONJUNTO DE REAIS\n\n");
    float n;
    FILE*f = fopen("conjunto.txt", "w");
        while(n != FLAG){
            printf("Digite aqui um valor real[tecle 0 para parar leitura]: ");
            scanf("%f", &n);
            if(n != FLAG)
                fprintf(f, "%.2f\n", n);
        }
    fclose(f);

    float amp = calculo(&f);
    printf("\n\nA amplitude dos números dentro do conjunto inserido é: %.2f", amp);
return 0;
}

float calculo(FILE*f){
    float maior;
    float menor;
    float i = 0;
    float n;
    f = fopen("conjunto.txt", "r");
        while(fscanf(f, "%f", &n) != EOF){
            i++;
            if(i == 1){
                menor = n;
                maior = n;
            }
            else{
                if(n < menor){
                    menor = n;
                }
                if(n > maior){
                    maior = n;
                }
            }
        }
    fclose(f);
    float amp;
    amp = maior - menor;
    return amp;
}
