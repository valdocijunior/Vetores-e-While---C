#include <stdio.h>

int main(void)

{
	int cont, nros[50];
	
		for (cont = 0; cont < 50; cont++) {
			printf ("Digite um numero inteiro: ");
			scanf ("%d", &nros[cont]);
			
		}
		
		for (cont = 0; cont < 50; cont++) {
			if (nros[cont] %2 == 0) {
				printf ("Na posicao %d, existe um numero par.\n", cont);
			}
		}
		
	system("pause");
	return 0;
}
