#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float resultado;
    printf("Insira dois numeros:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    if (num1 < num2){
        resultado = (num1 - num2);
    }
    else{
        resultado = (num2 - num1);
    }
    printf("%f", resultado);
    return 0;
}
