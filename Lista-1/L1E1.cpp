int main()
{
    char nome[50];
    float salario;
    float aumento;
    printf("insira seu nome:\n");
    scanf("%s", &nome);
    printf("insira seu salario:\n");
    scanf("%f", &salario);
    aumento = (salario * 0.285) + salario;
    printf("%s seu novo salario eh: %0.2f",nome, aumento);
}
