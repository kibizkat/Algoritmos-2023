#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

main() {
    int codigo;
    int tel;

    printf("Digite o DDD de destino da chamada: \n");
    scanf("%i", &codigo);
    printf("Digite o Numero do telefone: \n");
    scanf("%i", &tel);
        if ( codigo == 61) {
        printf("Voce esta ligando para Brasilia, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 71)
        printf("Voce esta ligando para Salvador, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 11)
        printf("Voce esta ligando para Sao Paulo, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 21)
        printf("Voce esta ligando para Rio de Janeiro, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 32)
        printf("Voce esta ligando para Juiz de Fora, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 19)
        printf("Voce esta ligando para Campinas, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 27)
        printf("Voce esta ligando para Vitoria, aqui esta o numero completo %i %i \n", codigo, tel);
        if ( codigo == 31)
        printf("Voce esta ligando para Belo Horizonte, aqui esta o numero completo %i %i \n", codigo, tel);}
        else
        printf("Este DDD %i ainda nao esta cadastrado em nosso sistema", codigo);

        return 0;
}