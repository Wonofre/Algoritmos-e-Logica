#include <stdio.h>
#include <stdlib.h>
//6) Solicite o nome, idade e sexo de uma pessoa. Valide o sexo entre (“F” / “M”) idade entre 10 e 100 anos
int main()
{
    char nome[99];
    int sexo = 0;
    int idade = 0;
    printf("isira seu nome:\n");
    scanf("%s", &nome);
    printf("isira o sexo F= 1 M = 2:\n");
    scanf("%d", &sexo);
    while((sexo != 1) && (sexo != 2)){
        printf("isira o sexo F= 1 M = 2:\n");
        scanf("%d", &sexo);
    }
    while ((idade < 10) || (idade > 100)){
        printf("isira uma idade valida:\n");
        scanf("%d", &idade);
    }
    return 0;
}
