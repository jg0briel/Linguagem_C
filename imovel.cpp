#include <stdio.h>
#include <locale.h>

#define promocao 80000
int main()
{
	setlocale(0, "Portuguese");
	
	float preco_imovel;
	
	printf("Digite o pre�o do im�vel:");
	scanf("%f", &preco_imovel);
	
	if (preco_imovel <= promocao)
		printf("O im�vel est� em promo��o");
		
	else
		printf("O im�vel est� no pre�o normal");
}


