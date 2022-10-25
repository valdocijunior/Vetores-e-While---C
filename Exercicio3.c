#include <stdio.h>

int main(void)

{

	int cont;
	float R[5], S[10], X[15];
	
		for (cont = 0; cont < 5; cont++) {
			printf ("Digite um numero para o Vetor R: ");
			scanf ("%f", &R[cont]);
		}
		
		for (cont = 0; cont < 10; cont++) {
			printf ("Digite um numero para o Vetor S: ");
			scanf ("%f", &S[cont]);
		}
		
		for (cont = 0; cont < 5; cont++) {
			X[cont] = R[cont];
		}
		
		for (cont = 5; cont < 15; cont++) {
			X[cont] = S[cont - 5];
		}
		
		for (cont = 0; cont < 15; cont++) {
			printf ("O vetor X, na posicao %d, contem o seguinte numero: %.2f\n", cont, X[cont]);
		}
		
		for (cont = 0; cont <5; cont++) {
			R[cont] = X[cont];
			printf ("O vetor R, na posicao %d, contem o seguinte numero: %.2f\n", cont, R[cont]);
		}
		
		for (cont = 0; cont < 10; cont++) {
			S[cont] = X[cont + 5];
			printf ("O vetor S, na posicao %d, contem o seguinte numero: %.2f\n", cont, S[cont]);
		}
		
	system("pause");
	return 0;

}
