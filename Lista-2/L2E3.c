#include <stdio.h>
#include <stdlib.h>
//3) Solicite dois valores (supostamente distintos) e apresente qual é o maior valor
int main()
{
    int num1;
    int num2;
    printf("insira dois numeros para saber qual eh maior:\n");
    scanf("%d%d", &num1, &num2);
        if(num1 > num2){
            printf("num 1 maior que num 2");
        }
        else{
            printf("numero 2 maior que n1");
        }
    return 0;
}
