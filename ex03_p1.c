#include <stdio.h>
#include <math.h>

/*3) Calculadora para:
    1.soma;
    2.subtracao;
    3.multiplicacao;
    4.divisao;
    5.potencia;
(Pode criar um programa para cada operacao).
*/

int main (){
    float x, y, resul;
    int o;

    printf("****************************\n");
    printf("        Calculadora        \n");
    printf("****************************\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Escolha a operacao:\n (1) Soma\n (2) Subtracao\n (3) Multiplicacao\n (4) Divisao\n ");
    scanf("%i", &o);

    switch (o){

        case 1 :
            resul = x + y;
            printf("A soma e: %.2f", resul);
        break;

        case 2 :
            resul = x - y;
            printf("A subtracao e: %.2f", resul);
        break;

        case 3 :
            resul = x * y;
            printf("A multplicacao e: %.2f", resul);
        break;

        case 4:
            if (y == 0) {
                printf("Erro: Divisao por zero!\n");
            } else {
                resul = x / y;
                printf("A divisao e: %.2f\n", resul);
            }
        break;
        
        default:
            printf("Operacao invalida!\n");
        break;

    }

    return 0;

}
