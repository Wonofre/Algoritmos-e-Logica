 int main() {
    int n, soma = 0;    float media;    int impar = 0;
    printf("Isira 10 numeros for saber se sao impar ou par e saiba a media dos numeros impares no final\n");
    for(int i = 0; i<10; i++)
    {
      printf("numero %d:\n", i+1);
      scanf("%d", &n);
      if(n % 2 == 0)
      {
        printf("o número %d eh par\n", n);
      }
      else
      {
        soma += n;
        impar++;
        printf("o número %d eh impar\n", n);
      }
    }
    if(soma != 0)
    {
      media = (float)soma / impar;      printf("a media dos números impares é: %f", media);
    }
    else
    {
      printf("Nenhum numero impar inserido.\n");
}
return 0;
 }
