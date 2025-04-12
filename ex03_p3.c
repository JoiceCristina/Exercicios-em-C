#include <stdio.h>
#include <math.h>

int main (){

/*3) Calculadora para:
    6. raiz quadrada
*/
    float x, resul;

    printf("*****************************\n");
    printf("   Calculo da Raiz Quadrada  \n");
    printf("*****************************\n");

    printf("Digite um numero: ");
    scanf("%f", &x);
    resul = sqrt(x);

    printf("A raiz quadrada e: %.2f ", resul);


    return 0;
}
