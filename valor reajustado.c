include <stdio.h>



int main() {

 float valor, reajuste, novoValor;



 // Leitura do valor original

 printf("Digite um valor: ");

 scanf("%f", &valor);



 // Cálculo do reajuste (10%)

 reajuste = valor * 0.1;



 // Cálculo do novo valor

 novoValor = valor + reajuste;



 // Exibição do valor original, reajuste e novo valor

 printf("Valor original: R$ %.2f\n", valor);

 printf("Reajuste: R$ %.2f (10%%)\n", reajuste);

 printf("Novo valor: R$ %.2f\n", novoValor);



 return 0;

}
