# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(0, "Portuguese");
	//FOR
	int contador;
	
//	for(contador = 1; contador <= 500; contador++)
//		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula. %d\n", contador);
		
	//WHILE
//	contador = 1;
//	while(contador <= 500){
//		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula. %d\n", contador);
//		contador++;
//	}

	//DO WHILE
	contador = 1;
	do{
		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula. %d\n", contador);
		contador++;
	} while(contador <= 500);
}
