#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho(){
printf("\n===SENAI====\n");
system("cls||clear");
fflush(stdin);
}


int main() {
setlocale(LC_ALL,"portuguese");
 //Declarando as Variáveis.
 float valor, reajuste, novoValor;

 // Leitura do valor original
cabecalho();
 printf("Digite um valor: ");
 scanf("%f", &valor);



 // Cálculo do reajuste (10%).
 cabecalho();
 reajuste = valor * 0.1;
 
 // Cálculo do novo valor
 cabecalho();
 novoValor = valor + reajuste;


 // Exibição do valor original, reajuste e novo valor
cabecalho();
 printf("Valor original: R$ %.2f\n", valor);
 printf("Reajuste: R$ %.2f (10%%)\n", reajuste);
 
cabecalho();
 printf("Novo valor: R$ %.2f\n", novoValor);

 return 0;

}
