#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int resposta[10], i;
	int otimo=0, bom=0, regular=0;
	
	for(i = 0; i < 10; i++){
		printf("Digite sua opinião, otimo(3), bom(2), regular(1):");
		scanf("%d", &resposta[i]);
		
		switch (resposta[i]){
			case 3:
				otimo++;
				break;
			case 2:
				bom++;
				break;
			case 1:
				regular++;
				break;
			default:
				printf("Opinião invalida. Por favor responda de acorco com o pedido.");
				i--;
		}
	}
	
	printf("%d pessoas responderam otimo, %d pessoas responderam bom, %d pessoas responderam regular.", otimo, bom, regular);
}
