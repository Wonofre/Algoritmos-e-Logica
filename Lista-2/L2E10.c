#include <stdio.h>
#include <stdlib.h>
//10) Solicite o mês (em número) para o usuário e apresente a descrição do mesmo (Ex. “janeiro”, “fevereiro”, etc).
int main()
{
    int mes;
    printf("Insira o mês de 1 a 12:\n");
    scanf("%d", &mes);
    switch(mes){
        case(1):
            printf("Janeiro");
            break;
        case(2):
            printf("Fevereiro");
            break;
        case(3):
            printf("Mar");
            break;
        case(4):
            printf("Abr");
            break;
        case(5):
            printf("Mai");
            break;
        case(6):
            printf("Junho");
            break;
        case(7):
            printf("Julho");
            break;
        case(8):
            printf("Ago");
            break;
        case(9):
            printf("Set");
            break;
        case(10):
            printf("Out");
            break;
        case(11):
            printf("Nov");
            break;
        case(12):
            printf("Dez");
            break;
            }

    return 0;
}
