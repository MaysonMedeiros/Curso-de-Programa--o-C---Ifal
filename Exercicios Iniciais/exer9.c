#include<stdio.h>

void main(){

    char simbol;
    printf("Digite uma vogal ou letra\n");
    scanf("%c",&simbol);
    switch (simbol){
            case 'a':
                printf("Vogal Digitada");
                break;
            case 'e':
                printf("Vogal Digitada");
                break;
            case 'i':
                printf("Vogal Digitada");
                break;
            case 'o':
                printf("Vogal Digitada");
                break;
            case 'u':
                printf("Vogal Digitada");
                break;
            default:
                printf("Consoante digitada");
    }
    getchar();
    getchar();

}
