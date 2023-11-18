 #include <stdio.h>
 int main() {
    char nome[99], nomeMaisVelho[99], nomePessoaMaisJovem[99];
    int idade, idadeMaisVelha = 0, idadeMaisJovem = 100;
    for(int i = 0; i<5; i++){
      printf("insira o nome %d:\n", i);
      scanf("%s", &nome);
      printf("insira a idade do %s", nome);
      scanf("%d", &idade);
      if (idade > idadeMaisVelha)
      {
        idadeMaisVelha = idade;
        nomeMaisVelho[99] = nome[99];
      }
      if (idade < idadeMaisJovem)
      {
        idadeMaisJovem = idade;
        nomePessoaMaisJovem[99] = nome[99];
      }
    }
      printf("O nome da pessoa mais velha é: %s\n", nomeMaisVelho);
      printf("O nome da pessoa mais nova é: %s\n", nomePessoaMaisJovem);

      return 0;
}
