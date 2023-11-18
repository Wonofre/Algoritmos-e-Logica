#include <stdio.h>
#include <stdlib.h>
//2) Solicite um valor e apresente as mensagens: “Valor positivo”, “Valor negativo” ou “Zero”

int main()
{
    float numero;
    printf("insira um numero para saber suas propriedades:\n");
    scanf("%f", &numero);
    if (numero < 0){
            printf("numero negativo");
    }
    else if (numero == 0){
            printf("numero igual a zero");
    }
    else{
            printf("numero positivo");
    }
    return 0;
}
