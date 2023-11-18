#include <stdio.h>
//13) Informado 3 números, apresente a soma do primeiro com o terceiro, multiplicando pelo segundo.
int main()
{
    int num1;
    int num2;
    int num3;
    int oper;
    printf("insira 3 numeros um após o outro para saber o resultado da operacao:\n");
    scanf("%d%d%d", &num1,&num2,&num3);
    oper = ((num1 + num3) * num2);
    printf("%d", oper);
    return 0;
}
