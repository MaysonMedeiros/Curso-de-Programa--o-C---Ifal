/* Escreva um algoritmo que leia dois vetores de 10 posi��es e fa�a a multiplica��o dos elementos
de mesmo �ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include<stdio.h>
#define TAM 10
int main(){
    int A[TAM], B[TAM], C[TAM], i = 0;
    //Criando as 10 posi��es do vetor A e B.
    for(;i < TAM;i++){
       printf("\nDigite a valor da posicao %d do vetor 1\n",i);
       scanf("%d",&A[i]);
       printf("\nDigite a valor da posicao %d do vetor 2\n",i);
       scanf("%d",&B[i]);
    }
    //Imprimindo o multiplica��o.
    for(i = 0;i < TAM;i++)
       printf(" %d",C[i] = A[i] * B[i]);
    return 0;
}

