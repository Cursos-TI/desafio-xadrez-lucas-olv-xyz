#include <stdio.h>

int main() {

    //numero de vezes que cada peça se move
    const int numCasasTorre = 5;
    const int numCasasBispo = 5;
    const int numCasasRainha = 8;

    //variavel de controle  do loop
    int i = 0;

    //usando for ------ movimento da torre ---------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= numCasasTorre; i++) {
        printf("Direita\n");
    }

    //usando while ------ movimento do bispo ---------
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= numCasasBispo) {
        printf("Cima,Direita\n");
        i++;
    }

    //usando do while ------ movimento da rainha ---------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= numCasasRainha);

    return 0;
}
