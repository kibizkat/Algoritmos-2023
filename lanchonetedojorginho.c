#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    int pedido;
    int quant;
    int valor;
    int dog100;
    int misto101;
    int xburg103;
    int xsal104;
    int xbac105;
    int refri106;

    printf(" Cardapio \n 100 - Cachorro Quente \n 101 - Bauru Simples \n 103 - X-Burguer \n 104 - X-Salada \n 105 - X-Bacon \n 106 - Refrigerante \n \n Digite o codigo do seu pedido: \n");
    scanf("%i", &pedido);
    printf("Digite quantas unidades deseja: \n");
    scanf("%i", &quant);
    if (pedido == 100){
    dog100 = 7,5;
    valor = dog100 * quant;
    printf("Seu pedido e %i Cachorro quente, valor R$ %i,00", quant, valor);}
    if (pedido == 101){
    misto101 = 5,5;
    valor = misto101 * quant;
    printf("Seu pedido e %i Misto Quente, valor R$ %i,00", quant, valor);}
    if (pedido == 103){
    xburg103 = 10,50;
    valor = xburg103 * quant;
    printf("Seu pedido e %i X-Burguer, valor R$ %i,00", quant, valor);}
    if (pedido == 104){
    xsal104 = 11,5;
    valor = xsal104 * quant;
    printf("Seu pedido e %i X-Salada, valor R$ %i,00", quant, valor);}
    if (pedido == 105){
    xbac105 = 13,5;
    valor = xbac105 * quant;
    printf("Seu pedido e %i X-Bacon, valor R$ %i,00", quant, valor);}
    if (pedido == 106){
    refri106 = 7,5;
    valor = refri106 * quant;
    printf("Seu pedido e %i Refrigerante, valor R$ %i,00", quant, valor);}
    else
    printf("Produto nao encontrado, tente outro codigo");

    return 0;
}