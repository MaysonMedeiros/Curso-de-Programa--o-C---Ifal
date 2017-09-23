/*Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido
mais um número qualquer e verificar se esse número existe no vetor ou não.
Se existir, o algoritmo deve gerar um novo vetor sem esse número. (Considere que não haverão números repetidos no vetor). */


#include<stdio.h>
#define TAM 20
int main(){
    int A[TAM], B[TAM], i = 0, consult = 0;
    //Criando as 10 posições do vetor A e B.
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
