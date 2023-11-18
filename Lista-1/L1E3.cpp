int main()
{
  float base, altura;
  float area;
  printf("insira a base do seu triangulo:\n");
  scanf("%f", &base);
  printf("insira a altura do seu triangulo:\n");
  scanf("%f", &altura);
  area = (base * altura) / 2;
  printf("a area do seu triangulo eh: %.2f", area);
}
