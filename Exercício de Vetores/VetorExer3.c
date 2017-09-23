/*Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo
após, imprimir o vetor M.*/

#include<stdio.h>
int main(){
    int a[10], x, m[10], i = 0;
    printf("Digite uma sequencia de 10 numeros inteiros positivos\n");
    // Amazena os valores no vetor m.
    for(; i < 10; i++){
        printf("Digite o numero da posicao A[%d] do vetor:\n",i);
        scanf("%d", &a[i]);
    }
    // Amazena o valor de x.
    printf("Digite o valor de X\n");
    scanf("%d", &x);
    // Vetor com os valores do vetor M multiplicado por x..
    for(i = 0; i < 10; i++)
        printf("%d ",a[i] * x);
    return 0;
}

