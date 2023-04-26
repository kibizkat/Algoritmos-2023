#include <stdio.h>

int main(){
    float temp_C;
    float temp_F;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &temp_C);

    temp_F = (1.8 * temp_C) + 32;

    printf("Temperatura em Fahrenheit = %.2f\n", temp_F);
}