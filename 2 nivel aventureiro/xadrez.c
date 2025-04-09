#include <stdio.h>

//cavalo tem q se movimentar 2 baixo 1 esquerda, L

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
    
    //usando loop alinhado (for while) ------ movimento do cavalo ---------
    printf("Movimento do Cavalo:\n");
    for (i = 0; i < 1; i++){
        int j = 0;
        //o J começa em 0, o loop interno roda enquanto j<2, printa baixo*2, saindo do loop printa esquerda
        while (j < 2){
            printf("baixo\n");
            j++;
        }
        printf("esquerda\n");
    }

    return 0;
}
