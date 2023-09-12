# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(0, "Portuguese");
	char letra = ' ';
	
	printf("Digite seu nome completo:");
	while(letra != '\n'){
		letra = getchar();
		printf("%c\n", letra);
	}
}
