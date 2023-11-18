#include <stdio.h>
#include <stdlib.h>
//2) Solicitar o nome e idade de 3 pessoas (utilize a estrutura FAÇA ENQUANTO)

int main()
{
    char nome[99];
    int idade, count;
    do{
        printf("Digite o nome %d:\n", count);
        scanf("%s", &nome);
        printf("Digite a idade do(a) %s:\n", nome);
        scanf("%d", &idade);
        count++;
    }while(count < 3);
    printf("Obrigado");
    return 0;
}
