#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
void cabecalho(){
printf("\n===SENAI====\n");
system("cls||clear");  
fflush(stdin);
}
int main() {
setlocale(LC_ALL,"portuguese");
  // Declaração de variáveis
  float salarioMínimo, salarioInformado = 1412.00,quantidadeSalarios;

  // Solicitação do salário do usuário.
  cabecalho();
  printf("Digite o valor do seu salário: R$ ");
  scanf("%f", &salarioInformado);

  ///Cálculo do número de salários.
  cabecalho();
  quantidadeSalarios=salarioInformado/salarioMinimo;

  ///Exibindo  o resultado.
  cabecalho();
  printf("Você ganha %.2f salários mínimos.\n",quantidadeSalarios);
  
  return 0;
}











