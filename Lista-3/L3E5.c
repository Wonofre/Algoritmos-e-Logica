#include <stdio.h>
#include <stdlib.h>
//5) Apresentar os números de 30 a 5 na tela (na mesma linha)
int main()
{
    int num = 30;
    while(num > 4){
        printf("%d,", num);
        num--;
    }
    return 0;
}
