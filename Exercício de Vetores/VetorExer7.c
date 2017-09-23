/*Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.*/

#include<stdio.h>
int main(){
    int v[30] = {0}, i = 0, x = 0, cont = 0;
    for(; i < 30; i++){
        //Armazena os valores no vetor.
        printf("Digite a valor da posicao %d do vetor maior que zero\n",i);
        scanf("%d", &v[i]);
    }
    // Numero que será consultado no vetor.
    printf("Digite um numero para consulta\n");
    scanf("%d", &x);
    //Verificador no numero x.
    for(i = 0; i < 30; i++){
        if(v[i] == x){
             cont++;
        }
    }
    printf("Numero de vezes que %d apareceu no vetor foi %d\n\n",x, cont);
    return 0;
}
