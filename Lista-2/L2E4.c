#include <stdio.h>
#include <stdlib.h>
//4) Solicite dois valores e apresente o maior e o menor elemento. Caso sejam iguais, informe ao usu�rio
int main()
{
    int num1;
    int num2;
    printf("insira dois numeros para saber qual eh maior:\n");
    scanf("%d%d", &num1, &num2);
        if(num1 > num2){
            printf("num 1 maior que num 2");
        }
        else if(num2 > num1){
            printf("numero 2 maior que n1 ");
        }
        else{
            printf("os numeros s�o iguais");
        }
    return 0;
}
