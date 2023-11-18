//13) Solicite dois nomes e apresente qual nome é maior (segundo a ordem alfabética)
#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100];
    char nome2[100];
    int cmp;
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    cmp = strcmp(nome1, nome2);

    if (cmp < 0) {
        printf("%s vem antes de %s em ordem alfabética.\n", nome1, nome2);
    } else if (cmp > 0) {
        printf("%s vem antes de %s em ordem alfabética.\n", nome2, nome1);
    } else {
        printf("Ambos os nomes são iguais.\n");
    }

    return 0;
}
