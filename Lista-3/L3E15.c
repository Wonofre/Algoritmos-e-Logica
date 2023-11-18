 int main() {
    int dia;
    int mes;
    int continuar = 1;

    while(continuar == 1)
    {
      printf("Insira o dia do seu aniversario entre 1 e 31:  ");
      scanf("%d", &dia);
      printf("Insira o mess do seu anivrsario entre 1 e 12: ");
      scanf("%d", &mes);

      while(dia < 1 || dia > 31 || mes < 1 || mes > 12)
      {
        printf("Insira uma data valida.\n");
        printf("Insira o dia do su anivrsario ntr 1  31: ");
        scanf("%d", &dia);
        printf("Insira o mes do su anivrsario (1-12): ");
        scanf("%d", &mes);
      }

      if((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19))
      {
        printf("Seu signo eh Aquario.\n");
      }

      else if((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
      {
        printf("Seu signo eh Pixs.\n");
      }

      else if((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
      {
        printf("Seu signo eh Aries.\n");
      }

      else if((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
      {
        printf("Seu signo eh Touro.\n");
      }

       else if((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
      {
        printf("Seu signo eh Gêmos.\n");
      }

       else if((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21))
      {
        printf("Seu signo eh Câncer.\n");
      }

      else if((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22))
      {
        printf("Seu signo eh Leao.\n");
      }

      else if((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
      {
        printf("Seu signo eh Virgem.\n");
      }

      else if((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
      {
        printf("Seu signo eh Libra.\n");
      }

      else if((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
      {
        printf("Seu signo eh Escorpiao.\n");
      }

      else if((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
      {
        printf("Seu signo eh Sagitario.\n");
      }

      else if((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20))
      {
        printf("Seu signo eh Capricornio.\n");
      }

      printf("Dsja continuar? 1 = s/ n = 0: ");
      scanf(" %c", continuar);
    }
      return 0;
}
