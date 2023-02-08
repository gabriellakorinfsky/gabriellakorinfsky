#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 valores e informe se eles são
    //iguais entre si para formarem os lados de um triângulo equilátero.

    //variáveis
    int ladoA;
    int ladoB;
    int ladoC;

    printf("\nDigite 3 valores para indicar se é um triângulo equilátero: \n");
    printf("Valor do Lado A = ");
    scanf("%d", &ladoA);

    printf("\nValor do Lado B = ");
    scanf("%d", &ladoB);

    printf("\nValor do Lado C = ");
    scanf("%d", &ladoC);

    if ((ladoA == ladoB) && (ladoA == ladoC) && (ladoB == ladoC) ){
        printf("\nOs valores dos lados são iguais, portanto o triângulo é equilátero");
        printf("\nLados A, B e C do triângulo, respectivamente: %d, %d e %d \n", ladoA, ladoB, ladoC);
    } else {
        printf("\nOs valores dos lados não são iguais, portanto o triângulo não é equilátero");
        printf("\nLados A, B e C do triângulo, respectivamente: %d, %d e %d \n\n", ladoA, ladoB, ladoC);
    }


}
