#include <stdio.h>

int main(void)

{
	int cont, vetor[15], resp, acertos = 0;
	
		for (cont = 0; cont < 15; cont++) {
			printf ("Digite um numero INTEIRO de 0 a 30: ");
			scanf ("%d", &vetor[cont]);
		}
	
			while(resp != 99) {
			
			printf ("Digite um numero inteiro: ");
			scanf("%d", &resp);
			
			for(cont = 0; cont < 15; cont++){

			
				if (resp == vetor[cont]) {
					acertos++;
				}

			}
		}
		for (cont = 0; cont < 15; cont++) {
			printf ("O vetor, na posicao %d, contem o seguinte numero: %d\n", cont, vetor[cont]);
		}
		
		printf ("O numero de acertos foi: %d\n", acertos);	
	system("pause");
	return 0;
}
