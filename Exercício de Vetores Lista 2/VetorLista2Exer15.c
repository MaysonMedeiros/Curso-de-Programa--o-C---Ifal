/* Fa�a um algoritmo para ler um vetor de 30 n�meros. Ap�s isto, ler mais um n�mero qualquer, calcular e
escrever quantas vezes esse n�mero aparece no vetor.   */


#include<stdio.h>
#define TAM 30
int main(){
    int A[TAM], i = 0, consult = 0, cont = 0;
    //Criando as 10 posi��es do vetor A e B.
    for(;i < TAM;i++){
        printf("Digite a valor da posicao %d do vetor A\n",i);
        scanf("%d",&A[i]);
    }
    printf("Digite a valor para consulta\n",i);
    scanf("%d",&consult);
    //Imprimindo o vetor c
    for(i = 0;i < TAM;i++){
        if(A[i] == consult)
            cont++;
    }
    printf("O valor consultado aparece no vetor %d vezes\n",cont);
    return 0;
}
