 int main() {
    char nome[100];
    int idade;
    char sexo;
    int soma = 0;
    char continuar;
    int count = 0;
    float media;
    int count2 = 0;
    printf("cadastro insira os dados de quantas pessoas precisar\n");
    while(continuar != 'n')
    {
      printf("insira o nome %d:\n", count+1);
      scanf("%s", nome);
      printf("insira a idade %d:\n", count+1);
      scanf("%d", &idade);
      printf("insira o sexo %d:\n", count+1);
      scanf(" %c", &sexo);
      if(sexo == 'f'){
        soma += idade;
        count2++;
        }
      printf("deseja continuar ? s/n\n");
      scanf(" %c", &continuar);
      count++;
        }
    media = (float)soma / count2;    printf("a media das idades das %d mulheres eh: %f", count2, media);
    return 0;
 }
