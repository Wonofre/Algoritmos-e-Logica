#include <stdio.h>
#include <stdlib.h>
//12) Solicite um n�mero qualquer e informe ao usu�rio se o mesmo � �PAR� ou se � �IMPAR�
int main()
{
    int n;
    printf("Insira um numero pra saber se � par ou impar:\n");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("par");
    }
    else{
        printf("impar");
    }
    return 0;
}
