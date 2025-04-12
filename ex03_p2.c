#include <stdio.h>
#include <math.h>

int main (){

/*3) Calculadora para:
    5. potencia
*/
    float base, expo, resul;

    printf("*****************************\n");
    printf("     Calculo de Potencia     \n");
    printf("*****************************\n");

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor do expoente: ");
    scanf("%f", &expo);

    resul = pow(base, expo);

    printf("%.2f elevado a %.2f = %.2f ", base, expo, resul);

    return 0;
}
