#include <stdio.h>

int main() {
  // Declaração de variáveis
  float salarioUsuario, salarioBase = 1412.00, numeroSalarios;

  // Solicitação do salário do usuário
  printf("Digite o valor do seu salário: R$ ");
  scanf("%f", &salarioUsuario);

  // Cálculo do número de salários
  numeroSalarios = salarioUsuario / salarioBase;

  // Impressão do resultado
  printf("Você ganha %.2f salários mínimos.\n", numeroSalarios);

  return 0;
}











