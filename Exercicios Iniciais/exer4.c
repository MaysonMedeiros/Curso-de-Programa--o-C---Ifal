#include<stdio.h>

void main(){

    int num;
    printf("Digite um mumero\n");
    scanf("%d",&num);

    if(num == 5)
        printf("Numero digitado foi 5\n");
    else {
        if(num == 200)
            printf("Numero digitado foi 200\n");

        if(num == 400)
            printf("Numero digitado foi 400\n");

        if(num > 500 && num < 1000){
             printf("Numero digitado e maior que 500 e menor que 1000\n");
             printf("Numero digitado foi %d\n",num);
        }

        if((num < 500) || (num > 1000) || (num =! 5) || (num =! 200) || (num =! 400))
             printf("Numero fora do escopo desejado\n");
    }

    getchar();
    getchar();
}
