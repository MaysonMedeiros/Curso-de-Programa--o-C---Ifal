/*  Leia um conjunto de valores inteiros e em seguida exiba-os na ordem inversa do que foram digitados. */
#include<stdio.h>
#define TAM 10
int main(){
    int A[TAM], i = 0;
    //Criando as 10 posições do vetor A e B.
    for(;i < TAM;i++){
       printf("\nDigite a valor da posicao %d do vetor\n",i);
       scanf("%d",&A[i]);
    }
    //Imprimindo o multiplicação.
    for(i = 9;i >= 0;i--)
       printf(" %d",A[i]);
    return 0;
}

