#include <stdio.h>
//14) Sendo dado dois números pelo usuário, apresente a décima parte da subtração de um pelo outro, utilizando uma
//terceira variável.

int main()
{
    int num1;
    int num2;
    float oper;
    printf("insira dois numeros um após o outro:\n");
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
