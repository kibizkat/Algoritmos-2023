#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
    int mamifero;
    int quadrupede;
    int bipede;
    int onivoro;
    int frutifero;
    int voadores;
    int aquatico;
    int carnivoro;
    int herbivoro;
    int aves;
    int naovoadores;
    int tropical;
    int polar;
    int nadadora;
    int derapina;
    int repteis;
    int casco;
    int sempatas;

    printf("Digite 1 para sim e 0 para nao, vamos la! \n E mamifero? \n");
    scanf("%i", &mamifero);
    if (mamifero == 1){
    printf("E quadrupede? \n");
    scanf("%i", &quadrupede);}
    if (quadrupede == 1 && mamifero == 1){
    printf("E carnivoro? \n");
    scanf("%i", &carnivoro);}
    if (carnivoro == 1 && mamifero == 1 && quadrupede == 1){
    printf("Entao o animal escolhido foi o Leao");}
    if (carnivoro == 0)
    printf("Ele e herbivoro? \n");
    scanf("%i", &herbivoro);
    if (herbivoro == 1 && quadrupede == 1 && mamifero == 1)
    printf("Entao o animal escolhido foi o Cavalo");
    if (quadrupede == 0 && mamifero == 1 && herbivoro == 0){
    printf("E Bipede? \n");
    scanf("%i", &bipede);
    if(bipede == 1 && mamifero == 1)
    printf("E Onivoro? \n");
    scanf("%i", &onivoro);
    if (bipede == 1 && onivoro == 1 && mamifero == 1)
    printf("Entao o animal escolhido foi o homem");}
    if (bipede == 1 && onivoro == 0 && mamifero == 1){
    printf("E frutifero? \n");
    scanf("%i", &frutifero);
    if (frutifero == 1 && bipede == 1 && mamifero == 1)
    printf("Entao o animal escolhido foi o Macaco");}
    if (bipede == 0 && mamifero == 1){
    printf("E Voador? \n");
    scanf("%i", &voadores);
    if (voadores == 1 && mamifero == 1)
    printf("Entao o animal escolhido foi o Morcego");}
    if (voadores == 0 && mamifero == 1){
    printf("E aquatico? \n");
    scanf("%i", &aquatico);
    if (aquatico == 1 && mamifero == 1)
    printf("Entao o animal escolhido foi a Baleira");}
    if (mamifero == 0){
    printf("E uma Ave? \n");
    scanf("%i", &aves);}
    if (aves == 1){
    printf("E Nao-voadoras? \n");
    scanf("%i", &naovoadores);}
    if (aves == 1 && naovoadores == 1){
    printf("E tropical? \n");
    scanf("%i", &tropical);}
    if (tropical == 1 && naovoadores == 1 && aves == 1){
    printf("Entao o animal escolhido foi o Avestruz");}
    if (tropical == 0 && naovoadores == 1 && aves == 1){
    printf("E Polar? \n");
    scanf("%i", &polar);}
    if  (polar == 1 && naovoadores == 1 && aves == 1){
    printf("Entao o animal escolhido foi o Pinguim");}
    if (polar == 0 && naovoadores == 1 && aves == 1){
    printf("E Nadador? \n");
    scanf("%i", &nadadora);
    if (nadadora == 1 && naovoadores == 1 && aves == 1)
    printf("Entao o animal escolhido foi o pato");
    if (nadadora == 0 && naovoadores == 1 && aves == 1)
    printf("E De Rapina? \n");
    scanf("%i", &derapina);
    if (derapina == 1 && aves == 1)
    printf("Entao o animal escolhido foi o Aguia");}
    if (aves == 0){
    printf("E Reptil? \n");
    scanf("%i", &repteis);
    if (repteis == 1)
    printf("Tem casco? \n");
    scanf("%i", &casco);
    if (casco == 1 && repteis == 1)
    printf("Entao o animal escolhido foi a Tartaruga");
    if (casco == 0 && repteis == 1)
    printf("E carnivoro? \n");
    scanf("%i", &carnivoro);
    if (carnivoro == 1 && repteis == 1)
    printf("Entao o animal escolhido foi o Crocodilo");
    if (carnivoro == 0 && repteis == 1)
    printf("Ele e sem patas? \n");
    scanf("%i", &sempatas);
    if (sempatas == 1 && repteis == 1)
    printf("Entao o animal escolhido foi a Cobra");}

        return 0;
}