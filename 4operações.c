#include<stdio.h>
#include<locale.h>
int main(){//Início do Programa.
setlocale(LC_ALL,"portuguese");//Comando para aceitar acentuações.
float soma,subtracao;//Declarando as variáveis.
float multiplicacao,divisao;
float primeiroNumero,segundoNumero;
//Pedindo dados ao usuário.
printf("\t\nDigite o primeiro número:");
scanf("%f",&primeiroNumero);

printf("\t\nDigite o segundo número:");
scanf("%f",&segundoNumero);

//Calculando as 4 operações.
soma=primeiroNumero+segundoNumero;
subtracao=primeiroNumero-segundoNumero;
multiplicacao=primeiroNumero*segundoNumero;
divisao=primeiroNumero/segundoNumero;

system(cls||clean);
  

//Exibindo o resultado.
printf("\t\n===Resultado das 4 operações.");
printf("\nSoma:%2.f",soma);
printf("\nSubtração:%2.f",subtracao);
printf("\nMultiplicação:%2.f",multiplicacao);
printf("\nDivisão:%2.f",divisao);
printf("\nPrimeiro Número:%2.f",primeiroNumero);
printf("\nSegundo Número:'2.f",segundoNumero);
return 0;
}













