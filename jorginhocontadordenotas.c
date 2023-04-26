#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
    int total;
    int cedula;
    int nota_100;
    int nota_50;
    int nota_20;
    int nota_10;
    int nota_5;
    int nota_2;
    int nota_1;

    printf("Digite o valor total:");
    scanf("%i", &total);
    nota_100 = total /100;
    total = total%100;
    nota_50 = total/50;
    total = total%50;
    nota_20 = total /20;
    total = total%20;
    nota_10 = total/10;
    total = total%10;
    nota_5 = total /5;
    total = total%5;
    nota_2 = total/2;
    nota_1 = total%2;
    printf("O valor informado em cedulas de R$100 = %.1i\n", nota_100);
    printf("O valor informado em cedulas de R$50 = %.1i\n", nota_50);
    printf("O valor informado em cedulas de R$20 = %.1i\n", nota_20);
    printf("O valor informado em cedulas de R$10 = %.1i\n", nota_10);
    printf("O valor informado em cedulas de R$5 = %.1i\n", nota_5);
    printf("O valor informado em cedulas de R$2 = %.1i\n", nota_2);
    printf("O valor informado em cedulas de R$1 = %.1i\n", nota_1);
    system("pause");
}