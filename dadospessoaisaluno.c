#include <stdio.h>

int main() {
  // Declaração das variáveis
  char nome[50];
  int idade;
  float nota1, nota2, nota3, nota4, media;

  // Solicitação do nome do aluno
  printf("Digite o nome do aluno: ");
  scanf("%s", nome);

  // Solicitação da idade do aluno
  printf("Digite a idade do aluno: ");
  scanf("%d", &idade);

  // Solicitação das notas do aluno
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);
  printf("Digite a quarta nota: ");
  scanf("%f", &nota4);

  // Cálculo da média aritmética
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  // Exibição dos resultados
  printf("\nNome: %s\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Notas: %.1f, %.1f, %.1f, %.1f\n", nota1, nota2, nota3, nota4);
  printf("Média: %.1f\n", media);

  return 0;
}














