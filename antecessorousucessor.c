#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho(){
printf("\n=== SENAI ===\n);
system("cls||clear");
fflush(stdin);
}


int main() {
setlocale(LC_ALL,"portuguese");
int numero;

  // Leitura do número inteiro.
  cabecalho();
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  // Cálculo do antecessor e sucessor.
  cabecalho();
  int antecessor = numero - 1;
  int sucessor = numero + 1;

  // Exibição do antecessor e sucessor.
  cabecalho();
  printf("Antecessor: %d\n", antecessor);
  printf("Sucessor: %d\n", sucessor);

  return 0;
}
