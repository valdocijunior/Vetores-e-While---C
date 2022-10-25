#include <stdio.h>

int main(void)

{
	int cont, nros[20];
	char naoHa;
		for (cont = 0; cont < 5; cont++) {
			printf ("Digite um numero inteiro: ");
			scanf ("%d", &nros[cont]);
		}
		
		for (cont = 0; cont < 5; cont++) {
			if (nros[cont] == 4) {
				printf ("A posicao no vetor que o numero 4 esta: %d\n", cont);
			} else { 
			}
				
		}
	
	system("pause");
	return 0;
}
