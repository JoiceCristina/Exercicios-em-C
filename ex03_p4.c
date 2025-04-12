#include <stdio.h>
int main (){

/*3) Calculadora para:
    7. Porcentagem
*/
    float v, p, resul;

    printf("*****************************\n");
    printf("    Calculo da Porcentagem   \n");
    printf("*****************************\n");


    printf("Digite o valor: ");
    scanf("%f", &v);

    printf("Digite a porcentagem: ");
    scanf("%f", &p);


    resul = (v * p) / 100;

    printf("A porcentagem e: %.2f ", resul);

    return 0;
}
