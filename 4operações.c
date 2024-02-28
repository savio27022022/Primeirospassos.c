#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void cabecalho(){
printf("\n=== SENAI ===\n");
system("cls||clear");
}

int main(){
setlocale(LC_ALL,"portuguese");
//Declarando  as Variáveis.
float soma,subtracao;
float multiplicacao,divisao;
float primeiroNumero,segundoNumero;
//Pedindo dados ao usuário.
cabecalho();
printf("\t\nDigite o primeiro número:");
scanf("%f",&primeiroNumero);
  
cabecalho();
printf("\t\nDigite o segundo número:");
scanf("%f",&segundoNumero);

//Calculando as 4 operações.
cabecalho();
soma=primeiroNumero+segundoNumero;
subtracao=primeiroNumero-segundoNumero;
multiplicacao=primeiroNumero*segundoNumero;
divisao=primeiroNumero/segundoNumero;

//Exibindo o resultado.
cabecalho();
printf("\t\n===Resultado das 4 operações.");
printf("\nSoma:%2.f",soma);
printf("\nSubtração:%2.f",subtracao);
printf("\nMultiplicação:%2.f",multiplicacao);
printf("\nDivisão:%2.f",divisao);
printf("\nPrimeiro Número:%2.f",primeiroNumero);
printf("\nSegundo Número:'2.f",segundoNumero);
return 0;
}













