#include <stdio.h>
#include <locale.h>

#define promocao 80000
int main()
{
	setlocale(0, "Portuguese");
	
	float preco_imovel;
	
	printf("Digite o preço do imóvel:");
	scanf("%f", &preco_imovel);
	
	if (preco_imovel <= promocao)
		printf("O imóvel está em promoção");
		
	else
		printf("O imóvel está no preço normal");
}


