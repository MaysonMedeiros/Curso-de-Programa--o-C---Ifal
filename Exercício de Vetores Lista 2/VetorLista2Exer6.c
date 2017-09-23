/* Faça um algoritmo que leia um array de inteiros positivos e substitui seus elementos de valor ímpar por -1 e os pares por +1.  */
#include<stdio.h>
#define TAM 10
int main(){
    int A[TAM], i = 0;
    //Criando as 10 posições do vetor A.
    for(;i < TAM;i++){
       printf("\nDigite a valor da posicao %d do vetor\n",i);
       scanf("%d",&A[i]);
    }
    for(i = 0;i < TAM;i++){
       if(A[i] % 2 == 0)
          printf(" %d",A[i] = +1);
       else
          printf(" %d",A[i] = -1);
    }
    printf("\n");
    return 0;
}

