/*Fa�a um algoritmo para ler um vetor de 20 n�meros. Ap�s isto, dever� ser lido mais um n�mero qualquer e
verificar se esse n�mero existe no vetor ou n�o.
Se existir, o algoritmo deve gerar um novo vetor sem esse n�mero.
(Considere que n�o haver�o n�meros repetidos no vetor).*/

#include<stdio.h>
int main(){
    int v[20] = {0}, y[20] = {0}, i = 0, x = 0;
    for(; i < 20; i++){
        //Armazena os valores no vetor.
        printf("Digite a valor da posicao %d do vetor maior que zero\n",i);
        scanf("%d", &v[i]);
        if(v[i] == 0){ //Verifica se o n�mero � o flag.
            do{
                printf("Voce digitou o numero zero!!\nTente novamente!!!\n");
                scanf("%d", &v[i]);
            }while(v[i] == 0);
        }
     }
    // Numero que ser� consultado no vetor.
    printf("Digite um numero para consulta");
    scanf("%d", &x);

    // Armezena valores no novo vetor
    for(i = 0; i < 20; i++){
        if(v[i] == x){
             y[i] = 0;
             printf("y[%d] = %d\n",i,y[i]);
        }
        else{
           y[i] = v[i];
           printf("y[%d] = %d\n",i,y[i]);
        }
    }
    return 0;
}

