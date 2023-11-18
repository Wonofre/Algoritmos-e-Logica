#include <stdio.h>
//11) Ler 3 notas e apresentar a média das mesmas.
int main()
{
    float notas;
    float soma;
    float media;
    int conta = 0;
    for(int i = 0; i < 3; ++i){
        printf("Insira a nota %d:\n", (i+1));
        scanf("%f", &notas);
        soma = (notas + soma);
        conta = ++conta;
    }
    media = (soma / conta);
    printf("a media eh: %0.2f",media);
    return 0;
}
