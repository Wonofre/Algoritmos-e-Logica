#include <stdio.h>
#include <stdlib.h>
//11) Solicite o ano qualquer no formato de 4 d�gitos, e apresente ao usu�rio se o ano � ou n�o Bissexto.
int main()
{
    int ano;
    printf("Insira o ano:\n");
    scanf("%d", &ano);
    if (ano % 4 == 0){
        printf("Ano bisexto");
    }
    else{
        printf("Ano n eh bisexto");
    }
    return 0;
}
