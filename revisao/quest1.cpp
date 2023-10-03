/*1) Pedir ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela.
a) exiba como caractere (%c).
b) exiba como inteiro (%d).
c) exiba como hexadecimal (%x).*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char caractere;
	
	printf("Digite um caractere:");
	scanf("%c",&caractere);
	
	printf("O caractere: %c\n", caractere); 
	printf("Como inteiro: %i\n", caractere);
    printf("Como hexadecimal: %x\n", caractere);
}

