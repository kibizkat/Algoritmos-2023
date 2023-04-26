#include<stdlib.h>
#include<stdio.h>

main(){
    int km;
    float litro;
    float comb;

    printf("Digite a Km percorrida:");
    scanf("%i", &km);
    printf("Digite o valor total de comb gasto:");
    scanf("%f", &comb);
    litro = km/comb;
    printf("A media de combustivel gasto foi de: %.1f Litros \n",litro);

}