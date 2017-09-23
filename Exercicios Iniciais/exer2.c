#include<stdio.h>

void main(){

    int num;
    printf("Digite um numero\n");
    printf("--->>>");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Mumero divisivel por 2\n");
    else
         printf("Mumero nao e divisivel por 2\n");

    if(num % 5 == 0)
        printf("Mumero divisivel por 5\n");
    else
         printf("Mumero nao e divisivel por 5\n");

    if(num % 10 == 0)
        printf("Mumero divisivel por 10\n");
    else
         printf("Mumero nao e divisivel por 10\n");

    getchar();
    getchar();
}
