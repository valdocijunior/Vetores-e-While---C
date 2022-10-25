#include <stdio.h>

//#comando nome_da_const valor

#define w 7

int main(void)

{
	//const int constante = 12;
	//CONSTANTE DECLARADA - INTEIRA - NOME - VALOR
	
	const int a =5;
	printf ("%d\n", a);
	
	//NÃO É POSSÍVEL ALTERAR DURANTE O PROGRAMA, APÓS SER DEFINIDO.
	
	printf ("%d\n", w);
	
	
	system("pause");
	return 0;
}
