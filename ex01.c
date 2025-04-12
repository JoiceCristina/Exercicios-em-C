#include <stdio.h>

/*1) Programa que recebe os dados do usuario e
imprime na tela a sua ficha de cadastro formatada.
Considere os seguintes dados: Nome, idade, peso e altura. */

int main(){
    char nome[50] ;
    int i;
    float a, p;

    printf("Nome: ");
    scanf("%s", &nome);

    printf("Idade: ");
    scanf("%i", &i);

    printf("Altura: ");
    scanf("%f", &a);

    printf("Peso: ");
    scanf("%f", &p);

    printf("****************************\n");
    printf("Ficha de Cadastro de Pessoa\n");
    printf("****************************\n");

    printf("Nome: %s\n", nome);
    printf("Idade: %i\n", i);
    printf("Altura: %.2f\n", a);
    printf("Peso: %.2f\n", p);

    printf("****************************\n");


    return(0);
}
