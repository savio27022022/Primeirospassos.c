#include <stdio.h>

int main() {
  int numero;

  // Leitura do número inteiro
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  // Cálculo do antecessor e sucessor
  int antecessor = numero - 1;
  int sucessor = numero + 1;

  // Exibição do antecessor e sucessor
  printf("Antecessor: %d\n", antecessor);
  printf("Sucessor: %d\n", sucessor);

  return 0;
}
