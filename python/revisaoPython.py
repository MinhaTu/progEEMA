# coding=utf-8
'''ao contrário do C, em Python nós não precisamos
declarar as variáveis, nem mesmo dizer seus respectivos tipos, 
o interpretador identifica automaticamente '''

 #não é necessário uso de ; nem {}
 #a identação é crucial em Python


'''ATRIBUIÇÃO DE VARIÁVEIS'''
num1 = 1     # a variavel num1 recebe o numero 1
num2 = 3.565 # a variável num2 recebe o número 3.565, que é float
c = 'A'		 # a variável c recebe o caractere A
nome = "Luis Inácio Lula da Silva"

'''OPERADORES MATEMÁTICOS + - * / // % '''
inteiro = 5 + 5; 			 #resultado: 10 			SOMA 			
reais1 = 10/3;				 #resultado: 3.3333333		DIVISÃO REAL	
inteiro = 10/3;				 #resultado: 3.3333333 no python a variável passa a ser float
inteiro = 10//3; 			 #resultado: 3				DIVISÃO INTEIRA
inteiro = 10%3;				 #resultado: 1				RESTO DA DIVISÃO
reais2 = ((5*3)/3) + 1;		 #resultado: 6				PARÊNTESES DETERMINAM A ORDEM

'''ENTRADA E SAÍDA DE DADOS EM PYTHON'''
inteiro = 5
print("Estou imprimindo um inteiro de valor: {0}".format(inteiro))

reais1 = 6.66
print("Estou imprimindo um flaot de valor: {0}".format(reais1))
c = 'A'
print("Estou imprimindo um char de valor: {0}".format(c))


inteiro = input()
reais1 = input("Digite um numero")
char = input()
print("O inteiro digitado foi: {0} \nO real digitado foi: {1} \nO char digitado foi: {2}".format(inteiro,reais1,char))