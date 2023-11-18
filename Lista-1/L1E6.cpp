#include <stdio.h>
//6) CVC = (3.1416 * R²) * H Volume de Cilindro
int main()
{
    float pi = 3.1416;
    float R, H, CVC;
    printf("Insira o Raio e depois o Volume do seu cilindro:\n");
    printf("Insira o Raio:\n");
    scanf("%f", &R);
    printf("Insira a Altura:\n");
    scanf("%f", &H);

    CVC = ((pi * (R * R)) * H);

    printf("Volume do Cilindro:%0.2f", CVC);

    return 0;
}
