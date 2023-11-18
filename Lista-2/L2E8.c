#include <stdio.h>
#include <stdlib.h>
//8) Levando em consideração que a nota mínima de aprovação é 6,0 e a frequência mínima seja de 75%, solicite ao
//usuário 2 notas e calcule a média. Solicite também qual é a carga horária (número de aulas) da disciplina e também
//solicite a quantidade de presenças que o aluno teve (em número de aulas). No fim, apresente se o aluno está
//APROVADO ou REPROVADO.
int main()
{
    float n1;
    float n2;
    float media;
    int aulas;
    int pres;
    int freq;
    printf("insira suas duas notas uma após a outra: ");
    scanf("%f%f", &n1,&n2);
    printf("insira a quantidade de aulas da disciplina: ");
    scanf("%d", &aulas);
    printf("insira quantas aulas vc foi: ");
    scanf("%d", &pres);
    media = (n1+n2)/2;
    freq = aulas * 0.75;
    if(pres < freq || media < 6 )
    {
      printf("vc reprovou");
    }
    else
    {
      printf("vc passou");
    }
    return 0;
}
