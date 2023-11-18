#include <stdio.h>
#include <stdlib.h>
//1) Solicitar o nome e a idade de uma pessoa e informar ao usuário se ela já pode ou não tirar CNH
int main()
{
    char nome[5];
    int idade;
    printf("insira o seu nome:\n");
    scanf("%s", &nome);
    printf("Insira sua idade:\n");
    scanf("%d", &idade);
    if (idade < 18){
        printf("N pode tirar carteira");
    }
    else{
        printf("%s pode tirar carteira", nome);
    }

    return 0;
}
