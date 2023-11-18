#include <stdio.h>
#include <stdlib.h>
//1) Solicitar o nome e idade de 3 pessoas (utilize a estrutura REPITA ATE)
int main()
{
    char nome[99];
    int idade, count;
    while(count < 3){
        printf("Digite o nome %d:\n", count);
        scanf("%s", &nome);
        printf("Digite a idade do(a) %s:\n", nome);
        scanf("%d", &idade);
        count++;
    }
    printf("Obrigado");
    return 0;
}
