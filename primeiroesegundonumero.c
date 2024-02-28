#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
void cabecalho(){
printf("\n==== SENAI ====\n");
system("cls||clear");
fflush(stdin);
}
int main(){
//Declaração das variáveis.
setlocale(LC_ALL,"portuguese");
int primeiroNumero,segundoNumero;
int soma,produto,media,menorValor,maiorValor;
int numerosIguais,numerosDiferentes;
//Solicitando dados ao Usuário.
cabecalho();
printf("\nDigite o primeiro número:");
scanf("%i",&primeiroNumero);

cabecalho();
printf("\nDigite o segundo número:");
scanf("%i",&segundoNumero);

//Calculando as operações necessárias.
cabecalho();
soma=primeiroNumero+segundoNumero;
cabecalho();
produto=primeiroNumero*segundoNumero;
cabecalho();
media=(primeiroNumero+segundoNumero)/2;

cabecalho();
if(primeiroNumero>segundoNumero){
primeiroNumero=maiorValor;
segundoNumero=menorValor;
}else if(primeiroNumero<segundoNumero){
primeiroNumero=menorValor;
segundoNumero=maiorValor;
}

cabecalho();
if(primeiroNumero==segundoNumero){
printf("\nOs números são iguais:");
}else{
}
cabecalho();
printf("\nOs números são diferentes:");
//Exibindo os Resultados.
cabecalho();
printf("\n====Exibindo os Resultados====\n");
printf("primeiro número:%i\n\n",primeiroNumero);
printf("segundo número:i%\n\n",segundoNumero);
printf("soma:%i\n\n",soma);
printf("produto:%i\n\n",produto);
printf("média:%i\n\n",média);
printf("números iguais:%i\n\n",numerosIguais);
printf("números diferentes:%i\n\n",numerosDiferentes);
printf("maior valor:%i\n\n",maiorValor);
printf("menor valor:%i\n\n",menorValor);
return 0;
}

