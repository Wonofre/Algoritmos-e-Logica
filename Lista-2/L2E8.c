#include <stdio.h>
#include <stdlib.h>
//8) Levando em considera��o que a nota m�nima de aprova��o � 6,0 e a frequ�ncia m�nima seja de 75%, solicite ao
//usu�rio 2 notas e calcule a m�dia. Solicite tamb�m qual � a carga hor�ria (n�mero de aulas) da disciplina e tamb�m
//solicite a quantidade de presen�as que o aluno teve (em n�mero de aulas). No fim, apresente se o aluno est�
//APROVADO ou REPROVADO.
int main()
{
    float n1;
    float n2;
    float media;
    int aulas;
    int pres;
    int freq;
    printf("insira suas duas notas uma ap�s a outra: ");
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
