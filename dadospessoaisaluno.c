#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho(){
printf("\n === SENAI ====\n");
system("cls||clear");
fflush(stdin);
}

int main() {
setlocale(LC_ALL,"portuguese");
  
  // Declaração das variáveis
  char nome[200];
  int idade;
  float primeiraNota,segundaNota,terceiraNota,media;
  

  // Solicitação do nome do aluno.
  cabecalho();
  printf("Digite o seu nome: ");
  scanf("%s", nome);

  // Solicitação da idade do aluno.
  cabecalho();
  printf("Digite a idade do aluno: ");
  scanf("%d", &idade);

  // Solicitação das notas do aluno.
  cabecalho();
  printf("Digite a primeira nota: ");
  scanf("%f", primeiraNota);
  
  cabecalho();
  printf("Digite a segunda nota: ");
  scanf("%f", &segundaNota);
  
  cabecalho();
  printf("Digite a terceira nota: ");
  scanf("%f", &terceiraNota);
  


  // Cálculo da média aritmética.
  cabecalho();
  media = (primeiraNota+segundaNota+terceiraNota)/3;
  
  // Exibição dos resultados.
  cabecalho();
  printf("Nome: %s\n\n",nome);
  printf("Idade: %d\n\n",idade);
  printf("Primeira nota:%1.f,\n\n",primeiraNota);
  printf("Segunda nota:%1.f,\n\n",segundaNota);
  printf("Terceira nota:%1.f,\n\n",terceiraNota);
  printf("Média:%1.f,\n\n",media);
  

  return 0;
}














