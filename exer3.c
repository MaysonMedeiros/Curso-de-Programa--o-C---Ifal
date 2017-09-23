#include<stdio.h>

void main(){

    float salario, prestacao;
    printf("Digite o salario\n");
    printf("--->>>");
    scanf("%f",&salario);

    printf("Digite a prestacao\n");
    printf("--->>>");
    scanf("%f",&prestacao);

    if(prestacao > salario * 0,3)
        printf("Emprestimo nao concedido\n");
    else
         printf("Emprestimo concedido\n");

    printf("Valor maximo de emprestimo %f",salario * 0.3);

    getchar();
    getchar();

}
