/*Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos.
Calcular a média da turma e contar quantos alunos
obtiveram nota acima desta média calculada. Escrever a média da turma e o resultado da contagem */


#include<stdio.h>
#define TAM 20
int main(){
    int Notas[TAM], NotasTotal = 0, Media = 0, i = 0, ContAlunos = 0;
    //Criando as 20 posições do vetor Notas.
    for(;i < TAM;i++){
        printf("Digite a valor da posicao %d do vetor A\n",i);
        scanf("%d",&Notas[i]);
        NotasTotal += Notas[i];
    }
    Media = (NotasTotal/TAM);
    //Calculado os alunos acima da media
    for(i = 0;i < TAM;i++){
        if(Notas[i] > Media)
            ContAlunos++;
    }
    printf("Media da turma eh %d\n",Media);
    printf("Numero de alunos acima da media eh %d\n", ContAlunos);

    return 0;
}
