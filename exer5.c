#include<stdio.h>

void main(){

    int placa, dig;
    printf("Digite o numero de uma placa no formato XXXX\n");
    scanf("%d",&placa);

    dig = placa % 10;
    printf("Digito vericador foi %d\n",dig);

    switch (dig){
            case 0:
                printf("Mes de emplacamento Janeiro\n");
                break;
            case 1:
                printf("Mes de emplacamento Fevereiro\n");
                break;
            case 2:
                printf("Mes de emplacamento Marco\n");
                break;
            case 3:
                printf("Mes de emplacamento Abril\n");
                break;
            case 4:
                printf("Mes de emplacamento Maio\n");
                break;
            case 5:
                printf("Mes de emplacamento Junho\n");
                break;
            case 6:
                printf("Mes de emplacamento Julho\n");
                break;
            case 7:
                printf("Mes de emplacamento Agosto\n");
                break;
            case 8:
                printf("Mes de emplacamento Setembro\n");
                break;
            case 9:
                printf("Mes de emplacamento Outubro\n");
                break;

    }
    getchar();
    getchar();






}
