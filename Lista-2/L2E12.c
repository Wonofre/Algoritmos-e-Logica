#include <stdio.h>
#include <stdlib.h>
//12) Solicite um número qualquer e informe ao usuário se o mesmo é “PAR” ou se é “IMPAR”
int main()
{
    int n;
    printf("Insira um numero pra saber se é par ou impar:\n");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("par");
    }
    else{
        printf("impar");
    }
    return 0;
}
