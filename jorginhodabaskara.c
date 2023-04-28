#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    int A;
    int B;
    int C;
    int x;
    int delta;

    printf("Vamos representar uma equacao de baskara, digite o valor de x: \n");
    scanf("%i", &x);
    A = x^2;
    B = x;
    C = 0;
    delta = (B^2) - ((4*A)*C);
    if (delta == 0){
    printf("Delta = %i \n", delta);}
    if(delta > 0){
    x = -B +- sqrt(delta);
    printf("dO valor de Delta = %i e do valor do x = %i", delta, x);}

    return 0;
}