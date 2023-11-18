#include <stdio.h>
//9) VPM = L1 * L2 * L3 Volume de Prisma

int main()
{
    float L1, L2, L3, VPM;
    printf("Insira o valor dos três lados do primas em sequencia:\n");
    scanf("%f", &L1);
    scanf("%f", &L2);
    scanf("%f", &L3);
    VPM = L1*L2*L3;
    printf("valor do volume do primas é:%0.2f", VPM);

    return 0;
}
