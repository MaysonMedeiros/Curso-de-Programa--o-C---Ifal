/*Faça um algoritmo que leia um vetor X[10]. Substitua, a seguir,
todos os valores nulos do vetor X por 1 e escreva novamente o vetor X.*/


#include<stdio.h>
int main(){
    int v[10] = {0}, i = 0;
    for(; i < 10; i++){
        //Armazena os valores no vetor.
        printf("Digite a valor da posicao %d do vetor\n",i);
        scanf("%d", &v[i]);
    }
    //Verifica a necessidade de substituicao caso seja nulo.
    for(i = 0; i < 10; i++){
        if(v[i] == 0){
            v[i] = 1;
            printf("v[%d] = %d\n",i,v[i]);
        }
        else
            printf("v[%d] = %d\n",i,v[i]);
    }
    return 0;
}
