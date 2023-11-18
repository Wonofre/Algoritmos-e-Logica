 int main() {
    char nome[100];
    float nt1;
    float nt2;
    int soma1 = 0;
    int soma32 = 0;
    float media1;
    float media32;
    int i = 0;
    int percentualF = 0;
    int percentualP = 0;
    int alunos = 4;
    printf("printf o nome dos alunos e suas duas notas para saber a media da turma e o percentual de reprovacao e aprovacao\n");
    while(i<alunos)
    {
      printf("nome do aluno %d:\n", i+1);
      scanf("%s", &nome);

      printf("nota 1 do aluno %d:\n", i+1);
      scanf("%f", &nt1);

      while(nt1 < 0 || nt1 > 10)
      {
        printf("insira uma nota valida entre 0 e 10 para a nota 1 do aluno %d:\n", i+1);
        scanf("%f", &nt1);
      }

      printf("nota 2 do aluno %d:\n", i+1);
      scanf("%f", &nt2);

      while(nt2 < 0 || nt2 > 10)
      {
        printf("insira uma nota valida entre 0 e 10 para a nota 2 do aluno %d:\n", i+1);
        scanf("%f", &nt2);
      }
      soma1 = nt1 + nt2;
      media1 = soma1 / 2.0;
      if(media1 >= 6)
      {
        percentualP++;
      }
      else
      {
        percentualF++;
      }
      soma32 += media1;
      i++;
    }
    media32 = soma32/(float)alunos;
    printf("a media da turma é %f\n", media32);
    printf("O percentual de alunos que passaram eh de %.2f%%\n", ((float)percentualP / alunos) * 100);

      return 0;
}
