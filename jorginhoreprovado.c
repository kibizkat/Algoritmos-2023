#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    float nota1;
    float nota2;
    float media;
    float freq;

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);
    printf("Sabendo que voce teve 100 aulas, digite sua media de frequencia nas aulas: \n");
    scanf("%f", &freq);
    media = (nota1 + nota2) /2;
    freq = (freq *100)/100;
    if (media >= 70)
    media = media/10;
    if (freq >= 75)
    printf("Parabens voce foi aprovado com %.2f de media e %.1f porcento de presenca \n", media, freq);
    else
    printf("Infelizmente voce foi reprovado");

    return 0;
}