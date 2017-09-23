/* Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o
valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/
#include<stdio.h>

int main(){
    int q[20], i = 0, maior = 0, indice = 0;
    printf("Digite uma sequencia de 20 numeros inteiros positivos\n\n");
    for(; i < 20; i++){ //Armazena os valores no vetor.
        printf("Digite o numero da posicao q[%d] do vetor\n",i);
        scanf("%d", &q[i]);
        if(q[i] < 0){ //Verifica se o número é positivo.
            do{
                printf("Voce digitou um numero negativo!! Nao eh possivel salvar numeros negativos.\nTente novamente!!!\n");
                scanf("%d", &q[i]);
            }while(q[i] <= 0);
        }
        if(q[i] >= maior){//Armazena o maior valor é a posição.
            maior = q[i];
            indice = i;
        }
    }
    printf("O maior valor e %d e o indice e q[%d]\n",maior,indice);
    return 0;
}
