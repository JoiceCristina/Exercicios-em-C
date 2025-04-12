#include <stdio.h>
/*4) Programa que recebe a distancia (km) e o tempo (hora) que foi necessario
para percorrer um trajeto. O programa deve retornar a velocidade media deste trajeto.*/
int main() {
    float temp, dist, vm;

    printf("Digite a distancia (km): ");
    scanf("%f", &dist);

    printf("Digite o tempo (hora): ");
    scanf("%f", &temp);

    vm = dist / temp;

    printf("A velocidade media e: %.2f km/h", vm);

    return 0;
}