#include <stdio.h>
#include <stdlib.h>
//7) Solicite ao usu�rio 3 n�meros (supostamente distintos). No final, apresente o maior e o menor deles.

int main()
{
    int numero1;
    int maior;
    int menor;
    int medio;
    printf("insira 3 numeros para saber o maior:\n");
    for(int i = 0; i < 3; i++){
        scanf("%d", &numero1);
        if (numero1 >= maior){
            maior = numero1;
        }
        if (numero1 <= menor){
            menor = numero1;
        }
    }
    printf("%d, eh o menor", menor);
    return 0;
}
