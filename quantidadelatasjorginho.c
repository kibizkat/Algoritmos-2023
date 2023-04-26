#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    float raio_cilindro;
    float altura_cilindro;
    float area_cilindro = PI * pow(raio_cilindro,2);
    float custo = 50;
    float lata = 15;
    float m2;
    float final;
    printf("Digite o raio da area a ser pintada:");
    scanf("%f", &raio_cilindro);
    printf("Digite a Altura da area a a ser pintada:");
    scanf("%f", &altura_cilindro);
    area_cilindro = (PI*(raio_cilindro*raio_cilindro)) + (2*(PI*raio_cilindro*altura_cilindro));
    m2 = area_cilindro / lata;
    final = m2 * custo;
    printf("A area a ser pintada e de: %.2f m2 \n O custo para pintar e de: R$ %.2f \n", m2, final);
}