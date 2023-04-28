#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    int idade;
    int infantil_a;
    int infantil_b;
    int juvenil_a;
    int juvenil_b;
    int idoso;

    printf("Digite sua Idade:");
    scanf("%i", &idade);
    idade = idade +1 -1;
    if (idade >= 5 && idade < 8){
    printf("Voce tem %i anos, se classifica no publico Infantil A", idade);}
    else if (idade >= 8 && idade < 10){
    printf("Voce tem %i anos, se classifica no publico Infantil B", idade);}
    else if (idade >= 10 && idade < 13){
    printf("Voce tem %i anos, se classifica no publico Juvenil A", idade);}
    else if (idade >= 13 && idade < 17){
    printf("Voce tem %i anos, se classifica no publico Juvenil B", idade);}
    else
    printf("Voce tem %i anos, se classifica no publico Senior", idade);

    return 0;
}