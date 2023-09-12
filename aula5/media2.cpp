# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(0, "Portuguese");
	
	char resposta = 's';
	float nota1, nota2, media;
	
	while(resposta == 's'){
		printf("Digite sua primeira nota:");
		scanf("%f", &nota1);
		
		printf("Digite sua segunda nota:");
		scanf("%f", &nota2);
		getchar();
		
		media = (nota1 + nota2) / 2.0;
		printf("A média é: %2.f\n", media);
		
		printf("Você deseja continuar o calculo (s/n)?");
		scanf("%c", &resposta);
	}
}
