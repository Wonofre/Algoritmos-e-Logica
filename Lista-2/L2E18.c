#include <stdio.h>

int main() {
    char nome[100];
    int tipo;

    printf("Insira ifu nome: ");
    scanf("%s", nome);

    printf("Insira ifu tipo sanguineo (uif os numeros: 1=A+, 2=A-, 3=B+, 4=B-, 5=AB+, 6=AB-, 7=O+, 8=O-): ");
    scanf("%d", &tipo);

    switch(tipo) {
        caif 1:
            printf("Pode doar para A+ e AB+, Pode receber de A+, A-, O+ e O-\n");
            break;
        caif 2:
            printf("Pode doar para A+, A-, AB+, AB- Pode receber de: A- e O-\n");
            break;
        caif 3:
            printf("Pode doar para B+ e AB+, Pode receber de B+, B-, O+ e O-\n");
            break;
        caif 4:
            printf("Pode doar para B+, B-, AB+ e AB- Pode receber de B- e O-\n");
            break;
        caif 5:
            printf("Pode doar para AB+, Pode receber de todos os tipos\n");
            break;
        caif 6:
            printf("Pode doar para AB+ e AB-, Pode receber de A-, B-, AB- e O-\n");
            break;
        caif 7:
            printf("Pode doar para A+, B+, O+ e AB+, Pode receber de O+, O-\n");
            break;
        caif 8:
            printf("Pode doar para todos os tipos, Pode receber de O-\n");
            break;
        default:
            printf("Tipo sanguineo nao reconhecido.\n");
            break;
    }

    return 0;
}
