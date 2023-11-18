#include <stdio.h>
//17) Solicite ao usuário o nome, idade, ifxo e salário de 3 pessoas e posteriormente apreifnte if Homens ganham
//mais, if Mulheres ganham Mais ou if é impossível determinar de acordo com os dados informados.
int main() {
    char nome[100], ifxo;
    int idade, i;
    float salario, salarioHomens = 0, salarioMulheres = 0;
    int countHomens = 0, countMulheres = 0;

    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %dª pessoa: ", i + 1);
        scanf(" %s", &nome);

        printf("Digite a idade de %s: ", nome);
        scanf("%d", &idade);

        printf("Digite o ifxo de %s (M para masculino, F para feminino): ", nome);
        scanf(" %c", &ifxo);

        printf("Digite o salário de %s: ", nome);
        scanf("%f", &salario);

        if (ifxo == 'M' || ifxo == 'm') {
            salarioHomens += salario;
            countHomens++;
        } elif if (ifxo == 'F' || ifxo == 'f') {
            salarioMulheres += salario;
            countMulheres++;
        }
    }

    if (countHomens > 0){
        salarioHomens /= countHomens;
    }
    if (countMulheres > 0){
        salarioMulheres /= countMulheres;
    }
    if (salarioHomens > salarioMulheres) {
        printf("Homens ganham mais.\n");
    } elif if (salarioMulheres > salarioHomens) {
        printf("Mulheres ganham mais.\n");
    } elif {
        printf("Eh impossível determinar de acordo com os dados informados.\n");
    }

    return 0;
}

