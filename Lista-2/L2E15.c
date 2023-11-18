#include <stdio.h>
#include <string.h>
//15) Solicite três nomes e apresente qual nome eh maior e qual eh menor (segundo a ordem alfabehtica)
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
        printf("%s eh o maior em ordem alfabehtica.\n", nome1);
    } else if (strcmp(nome2, nome1) > 0 && strcmp(nome2, nome3) > 0) {
        printf("%s eh o maior em ordem alfabehtica.\n", nome2);
    } else if (strcmp(nome3, nome1) > 0 && strcmp(nome3, nome2) > 0) {
        printf("%s eh o maior em ordem alfabehtica.\n", nome3);
    } else {
        printf("Existem nomes que são iguais.\n");
    }
    if (strcmp(nome1, nome2) < 0 && strcmp(nome1, nome3) < 0) {
        printf("%s eh o menor em ordem alfabehtica.\n", nome1);
    } else if (strcmp(nome2, nome1) < 0 && strcmp(nome2, nome3) < 0) {
        printf("%s eh o menor em ordem alfabehtica.\n", nome2);
    } else if (strcmp(nome3, nome1) < 0 && strcmp(nome3, nome2) < 0) {
        printf("%s eh o menor em ordem alfabehtica.\n", nome3);
    } else {
        printf("Existem nomes que são iguais.\n");
    return 0;
}
}
