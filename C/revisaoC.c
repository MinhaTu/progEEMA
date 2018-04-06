#include <stdio.h>

int main(){
  /*DECLARAÇÃO DE VARIÁVEIS*/
	//Tipo para caracteres
	char c; 							// armazenamento de somente UM caractere
	char nome[50]; 						// armazenamento de uma cadeira de caracteres


	//Tipos números inteiros
	short pequenoInteiro; 				// armazenamento pequeno
	int inteiro;						// armazenamento medio
	long int grandeInteiro; 			// armazenamento grande
	unsigned int inteiroSemSinal; 		// armazenamento sem sinal

	//Tipos de ponto flutuante
	float reais1;   //numeros reais em geral
	double reais2;  //numeros reais de muitos dígitos
  ///////////////////////////////////////////////////////////////////////////////////////////

  /*ATRIBUIÇÃO DE VARIÁVEIS*/
	inteiro = 5;
	reais1 = 5.0;
	c = 'A';
  ///////////////////////////////////////////////////////////////////////////////////////////

  /*OPERADORES MATEMATICOS + - * / %*/
	inteiro = 5 + 5; 			// resultado: 10 			SOMA 			
	reais1 = 10/3;				// resultado: 3.3333333		MULTIPLICAÇÃO REAL	
	inteiro = 10/3;				// resultado: 3				MULTIPLICAÇÃO INTEIRA
	inteiro = 10%3;				// resultado: 1				RESTO DA DIVISÃO
	reais2 = ((5*3)/3) + 1;		// resultado: 6				PARÊNTESES DETERMINAM A ORDEM
  ///////////////////////////////////////////////////////////////////////////////////////////

  /*ENTRADA E SAÍDA DE DADOS EM C*/
	inteiro = 5;
	printf("Estou imprimindo um inteiro de valor: %d \n", inteiro);

	reais1 = 6.66;
	printf("Estou imprimindo um float de valor: %.1f \n", reais1); //para double utiliza-se %lf

	c = 'A';
	printf("Estou imprimindo um char de valor: %c \n", c);

	//////////////////
	scanf("%d", &inteiro);  // o valor digitado no teclado é colocado na variável de nome inteiro
	scanf("%f", &reais1);   // o valor digitado no teclado é colocado na variável de nome reais1
	scanf("\n%c",&c);       // o valor digitado no teclado é colocado na variável de nome c
	printf("O inteiro digitado foi: %d \nO real digitado foi: %f \nO char digitado foi: %c \n", inteiro,reais1,c);

}