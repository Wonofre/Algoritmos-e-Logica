#include <stdio.h>
//14) Sendo dado dois n�meros pelo usu�rio, apresente a d�cima parte da subtra��o de um pelo outro, utilizando uma
//terceira vari�vel.

int main()
{
    int num1;
    int num2;
    float oper;
    printf("insira dois numeros um ap�s o outro:\n");
    scanf("%d%d", &num1,&num2);
    if (num1 < num2){
        oper = ((num2 - num1) / 10);
    }
    else{
        oper = ((num1 - num2) / 10);
    }
    printf("resultado:%0.2f", oper);
    return 0;
}
