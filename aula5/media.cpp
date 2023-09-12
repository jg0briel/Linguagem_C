# include <stdio.h>
# include <locale.h>

int main()
{
	setlocale(0,"Portuguese");
	int contador;
	float nota1, nota2, nota_geral, media;
	
	for(contador = 1; contador <= 3; contador++){
		printf("Digite sua primeira nota:");
		scanf("%f", &nota1);
		
		printf("Digite sua segunda nota:");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2.0;
		printf("A média é: %2.f\n", media);
	}
}

//int main()
//{
//	setlocale(0,"Portuguese");
//	int contador;
//	float nota1, nota2, nota_geral, media;
	
//	for(contador = 1; contador <= 3; contador++){
//		printf("Digite sua primeira e segunda nota:");
//		scanf("%f" "%f", &nota1, &nota2);
		
//		media = (nota1 + nota2) / 2.0;
//		printf("A média é: %2.f\n", media);
//	}
//}
