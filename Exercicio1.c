#include <stdio.h>

int main(void)

{
	int cont, vetor1[6], vetor2[6];
	
		for (cont = 0; cont < 6; cont++) {
			printf("Digite um numero inteiro: ");
			scanf("%d", &vetor1[cont]);
		}
		
		for (cont = 0; cont < 6; cont++) {
			vetor2[cont] = vetor1[cont] + cont;
			printf ("O vetor 2 na posicao %d contem o seguinte numero: %d\n", cont, vetor2[cont]);
		}
		
		
		system("pause");
		return 0;
}
