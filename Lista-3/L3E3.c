#include <stdio.h>
#include <stdlib.h>
//3) Solicitar o nome e idade de 3 pessoas (utilize a estrutura PARA)
int main()
{
    char nome[99];
    int idade, count;
    for(int i = 0; i < 3; i++){
        printf("Digite o nome %d:\n", count);
        scanf("%s", &nome);
        printf("Digite a idade do(a) %s:\n", nome);
        scanf("%d", &idade);
        count++;
    }
    printf("Obrigado");
    return 0;
}
