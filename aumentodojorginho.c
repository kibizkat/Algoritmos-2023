#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
    float salario;
    float sala1 = 0.15;
    float sala2 = 0.12;
    float sala3 = 0.10;
    float sala4 = 0.07;
    float sala5 = 0.04;

    printf("Digite qual seu salario:\n");
    scanf("%f", &salario);
        if(salario >= 0 && salario < 400.00){
        sala1 = (sala1 * salario);
        sala1 = sala1 + salario;
        printf("Seu salario atual e de R$ %f, seu novo salario com reajuste sera de R$ %f", salario, sala1);}
        if(salario >= 400.01 && salario < 800.00){
        sala2 = (sala2 * salario);
        sala2 = sala2 + salario;
        printf("Seu salario atual e de R$ %f, seu novo salario com reajuste sera de R$ %f", salario, sala2);}
        if(salario >= 800.01 && salario < 1200.00){
        sala3 = (sala3 * salario);
        sala3 = sala3 + salario;
        printf("Seu salario atual e de R$ %f, seu novo salario com reajuste sera de R$ %f", salario, sala3);}
        if(salario >= 1200.01 && salario < 2000.00){
        sala4 = (sala4 * salario);
        sala4 = sala4 + salario;
        printf("Seu salario atual e de R$ %f, seu novo salario com reajuste sera de R$ %f", salario, sala4);}
        if(salario >= 2000.01){
        sala5 = (sala5 * salario);
        sala5 = sala5 + salario;
        printf("Seu salario atual e de R$ %f, seu novo salario com reajuste sera de R$ %f", salario, sala5);}

        return 0;
}