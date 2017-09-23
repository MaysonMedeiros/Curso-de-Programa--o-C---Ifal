/*Escreva um algoritmo que leia 10 número reais de um vetor e, posteriormente, imprima os mesmos em
duas linhas. A primeira linha com aqueles elementos que são inferiores à media
do vetor, e a segunda com os elementos que são superiores. */
#include<stdio.h>
#define TAM 10
int main(){
    int A[TAM], B[TAM], C[TAM], i = 0, media = 0, soma = 0;
    //Criando as 10 posições do vetor A.
    for(;i < TAM;i++){
       printf("\nDigite a valor da posicao %d do vetor\n",i);
       scanf("%d",&A[i]);
       soma += A[i];
    }
    printf("\nMedia eh %d\n",media = (soma/TAM));
    printf("\nValores menores que a media\n");
    for(i = 0;i < TAM;i++){
       if(A[i] < media)
          printf(" %d",B[i] = A[i]);
    }
    printf("\nValores maiores que a media\n");
    for(i = 0;i < TAM;i++){
       if(A[i] > media)
          printf(" %d",C[i] = A[i]);
    }
    printf("\n");
    return 0;
}

