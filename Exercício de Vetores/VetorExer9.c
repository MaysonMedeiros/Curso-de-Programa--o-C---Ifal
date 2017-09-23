/*Faça um algoritmo que leia um vetor K[30]. Troque a seguir, todos os elementos de ordem ímpar do vetor com
os elementos de ordem par imediatamente posteriores. Mostre o vetor modificado.*/

#include<stdio.h>
int main(){
    int k[30] = {0}, i = 0, check = 0;
    for(; i < 30; i++){
        //Armazena os valores no vetor.
        printf("Digite a valor da posicao %d do vetor\n",i);
        scanf("%d", &k[i]);
    }
    //Verifica a necessidade de substituicao caso seja ímpar.
    for(i = 0; i < 30; i++){
        check = k[i] % 2;
        if(check == 1){
            k[i] = k[i] - 1;
            printf("k[%d] = %d\n",i,k[i]);
        }
        else
            printf("k[%d] = %d\n",i,k[i]);
    }
    return 0;
}
