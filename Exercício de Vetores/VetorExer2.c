/*O mesmo /exercício anterior, mas agora deve escrever o menor elemento do vetor e a
respectiva posição dele nesse vetor. */

#include<stdio.h>

int main(){
    int q[5], i = 0, menor = q[0], indice = 0;
    printf("Digite uma sequencia de 20 numeros inteiros positivos\n\n");
    for(; i<5; i++){ // Amazena os valores no vetor q[].
        printf("Digite o numero da posicao q[%d] do vetor\n",i);
        scanf("%d", &q[i]);
        if(q[i] < 0){
            printf("Voce digitou um numero negativo!! Nao eh possivel salvar numeros negativos.\nTente novamente!!!\n");
            scanf("%d", &q[i]);
        }
        if(q[i] < menor){ // Armazena o menor número
            menor = q[i];
            indice = i;
        }
    }
    printf("\nVetor digitado foi:");
    for(i = 0; i < 5; i++) // Imprime o vetor
        printf("%d ",q[i]);

    printf("\n");
    printf("O menor valor e %d e o indice e q[%d]\n",menor,indice);
    return 0;
}
