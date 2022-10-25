#include <stdio.h>

int main(void)

{
	int cont, X[10], A[10], B[10], soma = 0, acima = 0, abaixo = 0, contA = 0, contB = 0;
	float media;
	
		for (cont = 0; cont < 10; cont++) {
			printf ("Digite um numero INTEIRO: ");
			scanf ("%d", &X[cont]);
			
			soma = soma + X[cont];
			
			media = ((float)soma) / 10;
			
		}
		
		for (cont = 0; cont < 10; cont++) {
			if (X[cont] > media) {
				acima++;
			} else {
				abaixo++;
			}
		}
		
		for (cont = 0; cont < 10; cont++) {
			if(X[cont] > media) {
				A[contA] = X[cont];
				contA++;
			} 
		}
		
		for (cont = 0; cont < 10; cont++) {
			if(X[cont] < media) {
				B[contB] = X[cont];
				contB++;
			}
		}
		
		for (cont = 0; cont < acima; cont++) {
			printf("O vetor com valores ACIMA: %d\n", A[cont]);
		} 
		
		for (cont = 0; cont < abaixo; cont++) {
			printf("O vetor com valores ABAIXO: %d\n", B[cont]);
		} 
		
		
		printf("%.2f\n", media);
		printf("acima: %d\n", acima);
		printf("abaixo: %d\n", abaixo);
	
	system("pause");
	return 0;

}
