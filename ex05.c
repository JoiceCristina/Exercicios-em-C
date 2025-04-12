#include <stdio.h>
/*5) Conversao de medidas
 Km para metros;
 Metros para Km;
 Temperatura de fahrenheit para Celsius;*/

int main() {
    int e;
    float x, resul;

    printf("****************************\n");
    printf("    Conversao de Medidas    \n");
    printf("****************************\n");

    printf("Escolha a conversao:\n (1) Km para metros\n (2) Metros para Km\n (3) Fahrenheit para Celsius\n");
    scanf("%i", &e);

    switch (e){
        case 1: 
            printf("Digite em quilometros: ");
            scanf("%f", &x);
            resul = x * 1000;
            printf("%.2f km = %.2f metros\n", x, resul);
            break;

        case 2:
            printf("Digite em metros: ");
            scanf("%f", &x);
            resul = x / 1000;
            printf("%.2f metros = %.2f km\n", x, resul);
            break;
        
        case 3:
            printf("Digite a temperatura em Fahrenheit : ");
            scanf("%f", &x);
            resul = (x - 32) * 5/9;
            printf("%.2f oF = %.2f oC\n", x, resul);
            break;

        default : 
            printf("Opcao invalida. Tente novamente\n");
    }
    return 0; 
}