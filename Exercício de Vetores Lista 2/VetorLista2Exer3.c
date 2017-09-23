/*Dado um array A, com 10 números inteiros, criar um vetor B que contenha os elementos de A maiores que 5. */
#include<stdio.h>
#define TAM 10
int main(){
    int A[TAM], B[TAM], i = 0;
    //Criando as 10 posições do vetor A.
    for(;i < TAM;i++){
        printf("Digite a valor da posicao %d do vetor\n",i);
        scanf("%d",&A[i]);
     }
    // Armezena valores no vetor B maiores que 5, caso seja menor será atribuido zero a posição respectiva no vetor
    for(i = 0;i < TAM;i++){  // B[i] = (A[i] > 5) ? A[i] : 0; solução alternativa usando operador ternário.
       if(A[i] > 5)
            printf(" %d",B[i] = A[i]);
    }
    printf("\n");
    return 0;
}

