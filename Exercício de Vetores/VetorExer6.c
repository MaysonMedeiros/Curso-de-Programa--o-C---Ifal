/*Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e
escrever a quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.*/

#include<stdio.h>
int main(){
    int v1[15] = {0}, v2[15] = {0}, i = 0, cont = 0;
    for(; i < 15; i++){
        //Armazena os valores no vetor V1.
        printf("Digite a valor da posicao %d do vetor V1\n",i);
        scanf("%d", &v1[i]);
    }
    // Armezena valores no vetor V2
    for(i = 0; i < 15; i++){
        printf("Digite a valor da posicao %d do vetor V2\n",i);
        scanf("%d", &v2[i]);
    }
    //Calcular e escrever a quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.
    for(i = 0; i < 15; i++){
        if(v1[i] == v2[i])
           cont++;
    }
    printf("Quantidade de vezes que V1 e V2 possuem os mesmos numeros e nas mesmas posicoes e %d\n",cont);

    return 0;
}
