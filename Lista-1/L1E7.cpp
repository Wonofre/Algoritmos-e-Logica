#include <stdio.h>
//7) VCN = ((3.1416 * R²) / 3) * H Volume de um Cone


int main()
{
    float pi = 3.1416;
    float VCN, R, H;
    printf("Insira o Raio e depois o Volume do seu Cone:\n");
    scanf("%f", &R);
    scanf("%f", &H);
    VCN = (((pi * (R * R)) / 3) * H);
    printf("O volume do seu Cone eh:%0.2f", VCN);
    return 0;
}
