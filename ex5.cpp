#include <stdio.h>
#include <locale.h>

# define pi 3.14
int main()
{
	setlocale(0, "Portuguese");
	
	float raio, area;
	
	printf("Digite o raio da circunferência:");
	scanf("%f", &raio);
	
	area = pi * (raio * raio);
	printf("A área do circulo é %.2f", area);
}
