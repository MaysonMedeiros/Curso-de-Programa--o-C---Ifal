/*Faça um algoritmo que leia um vetor U[15].
Crie, a seguir, um vetor Primo[15] que conterá todos os valores primos do vetor U. Mostre o vetor Primo[15] no final.*/

#include<stdio.h>
int main(){
    int u[15], primo[15], i, y, div, pos = 0;
    for(i=0;i<5;i++){
        //Armazena os valores no vetor u.
        printf("Digite a valor da posicao %d do vetor\n",i);
        scanf("%d",&u[i]);
    }
    for (i=0;i<5;i++){
         div = 0;
         for(y=1;y<=u[i];y++){
                if(u[i]%y == 0){
                    div++;
                }
         }
         printf("valor do div %d\n",div);
         if(div==2){
                primo[pos]=u[i];
                pos++;
                }
    }
    for(i=0;i<pos;i++){
        printf("\n %d",primo[i]);
    }
    return 0;
}
