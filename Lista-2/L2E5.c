#include <stdio.h>
#include <stdlib.h>
//5) Solicite o nome, a idade e o sal�rio de uma pessoa. Calcule e apresente o novo sal�rio, de acordo com os crit�rios
//abaixo:
//Idade at� 35 anos, aumento de 12%
//Idade entre 36 e 50 anos, aumento de 14,5%
//Idade superior a 50 anos, aumento de 17%
int main()
{
    char nome[99];
    int idade;
    float salario;
    printf("insira o nome, idade e o salario um ap�s o outro nessa ordem:\n");
    scanf("%s%d%f", &nome,&idade,&salario);
    if (idade < 35){
        salario = salario * 0.12 + salario;
    }
    else if (idade > 36 || idade < 50){
        salario = salario * 0.145 + salario;
    }
    else if ( idade > 50){
        salario = salario * 0.17 + salario;
    }
    printf("o seu salario deveria ser %f", salario);
    return 0;
}
