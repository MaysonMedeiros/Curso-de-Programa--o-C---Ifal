/*Fa�a um algoritmo para ler 20 n�meros e armazenar em um vetor. Ap�s a leitura total dos 20 n�meros,
o algoritmo deve escrever esses 20 n�meros lidos na ordem inversa.*/

#include<stdio.h>

int main(){

    int v[20] = {0}, i = 0;
    for(; i < 20;i++){
        printf("Digite a valor da posicao %d do vetor\n",i); //Armazena os valores no vetor.
        scanf("%d", &v[i]);
    }
    for(i = 19; i > 0; i--)
        printf("v[%d] = %d\n",i,v[i]);//Imprime os valores em ordem inversa.
    return 0;
}
