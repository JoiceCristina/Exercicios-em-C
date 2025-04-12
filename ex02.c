#include <stdio.h>

/*2) Calculadora que calcula o IMC e
apresenta o resultado e a tabela de referencia.*/

int main(){

    float a, p, imc;

    printf("****************************\n");
    printf("       Calculo do IMC       \n");
    printf("****************************\n");

    printf("Digite sua altura: ");
    scanf("%f", &a);

    printf("Digite seu peso: ");
    scanf("%f", &p);

    imc = p / (a*a);

    printf("O seu IMC e: %.2f\n", imc);

    if(imc < 18.5){
        printf("Esta abaixo do peso");
    }
    else if(imc > 18.5 && imc < 24.9) {
        printf("Esta normal");
    }

    else if (imc > 25 && imc < 29.9){
        printf("Esta sobrepeso");
    }
    else if (imc > 30 && imc < 34.9){
        printf("Obesidade grau I");
    }
    else if (imc > 35 && imc < 39.9){
        printf("Obesidade severa");
    }
    else {
        printf("Obesidade morbida");
    }
    return(0);
}

