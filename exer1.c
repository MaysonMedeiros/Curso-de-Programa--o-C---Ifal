#include<stdio.h>
//Dados três valores A, B e C, construa um algoritmo que imprima os valores de forma
//ascendente (do menor para o maior)

void main(){

    int a, b, c;
    printf("Digite tres numero");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b){
        if(b<c)
            printf("%d %d %d",a,b,c);
        else
            printf("%d %d %d",a,c,b);
    }
    else {
        if(a<c)
           printf("%d %d %d",b,a,c);
        else
           printf("%d %d %d",b,c,a);
    }

}


