#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main() {
    int cateto_op;
    int cateto_ad;
    float hipo;

    printf("Digite o valor do Cateto Oposto:");
    scanf("%i", &cateto_op);
    printf("Digite o valor do Cateto Adjacente:");
    scanf("%i", &cateto_ad);
    hipo = sqrt(pow (cateto_op, 2) + pow (cateto_ad, 2));
    printf("O valor da hipotenusa e de: %.2f", hipo);
}