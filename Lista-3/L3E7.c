 #include <stdio.h>>
 int main() {
    int n;
    int soma = 0;
    float media;
    int count = 1;
    printf("insira 15 numeros entre 10 e 50 para saber a media: \n");
    while(count<16)
    {
      printf("Numero %d: \n", count);
      scanf("%d", &n);
      count++;
      soma += n;
    }
    media = (float)soma / 15;
    printf("a media dos 15 numeros eh: %0.4f", media);



    return 0;
}
