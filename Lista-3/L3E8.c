#include <stdio.h>
#include <stdbool.h>

int main()  {

    int numero = 5;

      do{ numero++;
      if(numero % 2 == 0)
      {
        printf("%d, ", numero);
      }
    }while(numero < 51);
}
