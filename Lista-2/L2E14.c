#include <stdio.h>
#include <string.h>
//14) Solicite tr�s nomes e apresente qual nome � maior (segundo a ordem alfab�tica)
int main() {
    char nome1[100];
    char nome2[100];
    char nome3[100];
    int cmp;
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    printf("Digite o terceiro nome: ");
    scanf("%s", nome3);

    if (strcmp(nome1, nome2) > 0 && strcmp(nome1, nome3) > 0) {
        printf("%s � o maior em ordem alfab�tica.\n", nome1);
    } else if (strcmp(nome2, nome1) > 0 && strcmp(nome2, nome3) > 0) {
        printf("%s � o maior em ordem alfab�tica.\n", nome2);
    } else if (strcmp(nome3, nome1) > 0 && strcmp(nome3, nome2) > 0) {
        printf("%s � o maior em ordem alfab�tica.\n", nome3);
    } else {
        printf("Existem nomes que s�o iguais.\n");
    }

    return 0;
}
