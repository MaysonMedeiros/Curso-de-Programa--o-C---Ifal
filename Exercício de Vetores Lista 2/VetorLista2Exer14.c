/*Fa�a um algoritmo para ler um vetor de 20 n�meros. Ap�s isto, dever� ser lido
mais um n�mero qualquer e verificar se esse n�mero existe no vetor ou n�o.
Se existir, o algoritmo deve gerar um novo vetor sem esse n�mero. (Considere que n�o haver�o n�meros repetidos no vetor). */


#include<stdio.h>
#define TAM 20
int main(){
    int A[TAM], B[TAM], i = 0, consult = 0;
    //Criando as 10 posi��es do vetor A e B.
    for(;i < TAM;i++){
        printf("Digite a valor da posicao %d do vetor A\n",i);
        scanf("%d",&A[i]);
    }
    printf("Digite a valor para consulta\n",i);
    scanf("%d",&consult);
    //Imprimindo o vetor c
    for(i = 0;i < TAM;i++)
        printf(" %d", B[i] = (A[i] == consult) ? 0 : A[i]);
    return 0;
}
