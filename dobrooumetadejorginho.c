#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
    float numero;
    float metade;
    float dobro;
    printf("Digite um valor:");
    scanf("%f", &numero);
        if (numero < 50){
        metade = numero /2;
        printf("O valor dividido por 2 é: %.2f\n", metade);}
        if(numero >= 50){
        dobro = numero *2;
        printf("o dobro do valor e: %.2f\n", dobro);}
}