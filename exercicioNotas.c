#include <stdio.h>

#define TOTAL 20

int main(void)

{
	int cont, acima = 0, abaixo = 0, contA = 0, contB = 0;
	float media, notas[20], notasA[20], notasB[20], soma = 0;
	
		for (cont = 0; cont < 20; cont++) {
			printf ("Digite a nota do aluno: ");
			scanf ("%f", &notas[cont]);
			
			soma = soma + notas[cont];
			
			
		}
		
			media = soma / TOTAL;
		
		for (cont = 0; cont < 20; cont++) {
			if (notas[cont] > media) {
				acima++;
			} else {
				abaixo++;
			}
		}
		
		for (cont = 0; cont < 20; cont++) {
			if (notas[cont] >= media) {
				notasA[contA] = notas[cont];
				contA++;
			}

		}
				
		for (cont = 0; cont < 20; cont++) {
			if (notas[cont] < media) {
				notasB[contB] = notas[cont];
				contB++;
			}

		}
		
		for (cont = 0; cont < acima; cont++ ) {
						printf ("O vetor com notas acima da media: %.2f\n", notasA[cont]);
		}
		
		for (cont = 0; cont < abaixo; cont++ ) {
						printf ("O vetor com notas abaixo da media: %.2f\n", notasB[cont]);
		}

		
		
		printf("%.2f\n", media);
		printf("acima: %d\n", acima);
		printf("abaixo: %d\n", abaixo);
	
	system("pause");
	return 0;
}
