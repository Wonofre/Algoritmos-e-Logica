#include <stdio.h>
//8) VPD = (L * L) * (H / 3) Volume de Pirâmide



int main()
{
    float L, H, VPD;
    printf("Insira primeiro o valor do Lado e depois da Altura:\n");
    scanf("%f", &L);
    scanf("%f", &H);
    VPD = ((L*L) * (H / 3));
    printf("O volume da piramede eh:%0.2f", VPD);
    return 0;
}
