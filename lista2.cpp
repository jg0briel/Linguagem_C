#include <stdio.h>
#include <locale.h>

#define ano_atual 2023

int main()
{
	setlocale(0, "Portuguese");
	
	int ano_nascimento, idade;
	
	printf("Digite o ano de nascimento do nadador:");
	scanf("%d", &ano_nascimento);
	
	idade = ano_atual - ano_nascimento;
	
	if (idade < 5 || idade > 80)
		printf("Idade não categorizada.", idade);
	else {
		switch(idade){
			case 5:
			case 6:
			case 7:
				printf("Nadador de idade %d é da categoria Infantil A", idade);
				break;
			case 8:
			case 9:
			case 10:
				printf("Nadador de idade %d é da categoria Infantil B", idade);
				break;
			case 11:
			case 12:
			case 13:
				printf("Nadador de idade %d é da categoria Juvenil A", idade);
				break;
			case 14:
			case 15:
			case 16:
				printf("Nadador de idade %d é da categoria Juvenil B", idade);
				break;
			default:
				printf("Nadador de idade %d ´da categoria Sênior", idade);
		}
	}
}
