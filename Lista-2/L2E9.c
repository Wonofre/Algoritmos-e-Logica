#include <stdio.h>
#include <stdlib.h>
//9) Solicite ao usu�rio um n�mero entre 10 e 45 e apresente ao usu�rio n�mero V�LIDO ou n�mero INV�LIDO.
int main()
{
    float n;
    printf("Isira um numero entre 10 e 45:\n");
    scanf("%f", &n);
    if (n < 10 || n > 45){
        printf("Numero invalido");
    }
    else{
        printf("bom mesm");
    }
    return 0;
}
