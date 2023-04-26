#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

main(){

    // VARIAVEIS

    int maria;               
    int joao;
    int soma;
    int ok;
    
    // PAR OU IMPAR
    printf("Faca ja sua aposta, Joao (par) ou Maria(impar)\n");
    scanf("%f", &ok);
    srand(time(NULL));      // IRA FAZER O SISTEMA GERAR UM NUMERO DO "RAND() % 10" CADA VEZ Q FIR INICIALIZADO
    maria = rand() % 10;    // IRA GERAR UM NUMERO ALEATORIO DE 0-10
    joao = rand() % 10;     //              ''
    soma = joao + maria;    // SOMA DOS DEDOS
    if (soma % 2 == 0)      // SE OS NUMEROS FOR PAR A VITORIA SERA DE JOAO SE NAO SERA DE MARIA
    printf("A soma dos dedos foi de: %i dedos, Vitoria do Joao", soma);
    else
    printf("A soma dos dedos foi de : %i dedos, Vitoria da Maria", soma);
}