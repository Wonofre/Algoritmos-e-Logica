#include <stdio.h>
//10) VEF = (4/3) * 3.1416) * R³ Volume de Esfera.
int main()
{
    float R, VEF;
    printf("insira o raio da esfera:\n");
    scanf("%f", &R);
    VEF = (4.0/3.0) * 3.1416 * (R*R*R);
    printf("o valor do volume %0.2f", VEF);
    return 0;
}
