#include <stdio.h>

int main() {
    char nome[100], nomeMaisVelho[100], nomePessoaMaisJovem[100];
    int idade, idadeMaisVelha = 0, idadeMaisJovem = 100, filhos, count = 0, soma = 0, m = 0, f = 0;
    char sexo;

    for(int i = 0; i < 3; i++)
    {
        printf("insira o nome %d:\n", i+1);
        scanf("%s", nome);
        printf("insira a idade %d:\n", i+1);
        scanf("%d", &idade);

        while(idade < 10 || idade > 100)
        {
            printf("insira uma idade valida entre 10 e 100:\n");
            scanf("%d", &idade);
        }

        if(idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            strcpy(nomeMaisVelho, nome);
        }

        if(idade < idadeMaisJovem) {
            idadeMaisJovem = idade;
            strcpy(nomePessoaMaisJovem, nome);
        }

        printf("insira o sexo %d:\n", i+1);
        scanf(" %c", &sexo);

        while(sexo != 'f' && sexo != 'm')
        {
            printf("insira um sexo valido m ou f:\n");
            scanf(" %c", &sexo);
        }

        if(sexo == 'm') {
            m++;
        }
        else {
            f++;
        }

        printf("insira a quantidade de filhos:\n");
        scanf("%d", &filhos);

        while(filhos < 0 || idade < filhos)
        {
            printf("insira uma quantidade de filhos valida\n");
            scanf("%d", &filhos);
        }

        if(sexo == 'f' && filhos == 0) {
            soma += idade;
            count++;
        }
    }

    printf("o percentual de homens nos dados eh: %d%%\n", (m * 100) / 3); // Total de pessoas é 3
    if(count != 0) {
        printf("a media de idade das mulheres sem filho eh: %d\n", (soma/count));
    } else {
        printf("Nao ha mulheres sem filhos na amostra.\n");
    }
    printf("O nome da pessoa mais nova eh: %s sua idade é: %d anos\n", nomePessoaMaisJovem, idadeMaisJovem);
    printf("A quantidade de mulheres entrevistadas é: %d\n", f);

    return 0;
}
