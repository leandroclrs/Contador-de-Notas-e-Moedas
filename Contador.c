#include <stdio.h>

int main()
{

	float a;
	int decisao;


	printf("\n Informe um valor R$: ");
	int vValor;
	scanf("%d", &vValor);
	
	int v100 = vValor / 100;
	vValor = vValor - v100 * 100;

	int v50 = vValor / 50;
	vValor = vValor - v50 * 50;

	int v20 = vValor / 20;
	vValor = vValor - v20 * 20;

	int v5 = vValor / 5;
	vValor = vValor - v5 * 5;

	int v2 = vValor / 2;
	vValor = vValor - v2 * 2;

	int v1 = vValor;

	printf("\n\n Quantidade de notas de R$100: %d notas" , (v100));
	printf("\n\n Quantidade de notas de R$50: %d notas", (v50));
	printf("\n\n Quantidade de notas de R$20: %d notas", (v20));
	printf("\n\n Quantidade de notas de R$5: %d notas", (v5));
	printf("\n\n Quantidade de notas de R$2: %d notas", (v2));
	printf("\n\n Quantidade de moedas de R$1: %d moedas", (v1));

}