#include<stdio.h>
#include<locale.h>
int main(){//Início do Programa.
setlocale(LC_ALL,"portuguese");//Comando para aceitar acentuações.
int soma,subtracao;//Declarando as variáveis.
int multiplicacao,divisao;
int num1,num2;
//Pedindo dados ao usuário.
printf("\t\nDigite o 1º número:");
scanf("%i",&num1);

printf("\t\nDigite o 2º número:");
scanf("%i",&num2);

//Calculando as 4 operações.
soma=num1+num2;
subtracao=num1-num2;
multiplicacao=num1*num2;
divisao=num1/num2;



//Exibindo o resultado.
printf("\t\n===Resultado das 4 operações.");
printf("\nSoma:%i",soma);
printf("\nSubtração:%i",subtracao);
printf("\nMultiplicação:%i",multiplicacao);
printf("\nDivisão:%i",divisao);
return 0;
}













