#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1;
    int l2;
    int l3;
    printf("Insira os valores dos 3 lados do triangulo em sequencia: ");
    scanf("%d%d%d", &l1,&l2,&l3);
    if ((l1 == l2) && (l1 == l3))
    {
      printf("seu triangulo é equilatero");
    }
    else if((l1 != l2) && (l1 != l3) && (l3 != l2))
    {
      printf ("seu traingulo é escaleno");
    }
    else
    {
      printf("seu traingulo é isósceles");
    }
  }

