#include <stdio.h>
//5) CPC = 3.1416 * D, sendo que D = R + R. Perímetro de Círculo
int main()
{
    float pi = 3.1416;
    float D, R, CPC;
    printf("insira o valor do Raio do Circulo:\n");
    scanf("%f", &R);
    D = (R + R);
    CPC = (pi * D);
    printf("O perimetro do seu circulo eh:%0.2f",CPC);
    return 0;
}
