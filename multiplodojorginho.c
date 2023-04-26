#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
    int numero;
    
    printf("Digite um valor:");
    scanf("%i", &numero);
    if  (numero % 3 == 0)
    printf("O valor e multiplo de 3 \n");
    else
    printf("Tentei outro numero! \n");

    return 0;
}
