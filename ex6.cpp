#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "Portuguese");
	float hr_trabalhada, valor_hr, desconto_INSS, salario_bruto, salario_desconto_INSS, salario_liquido;
	
	printf("Digite o número de horas trabalhadas:");
	scanf("%f", &hr_trabalhada);
	
	printf("Digite o valor das horas trabalhadas:");
	scanf("%f", &valor_hr);
	
	printf("Digite o percentual de desconto do INSS:");
	scanf("%f", &desconto_INSS);
	
	salario_bruto = hr_trabalhada * valor_hr;
	salario_desconto_INSS = salario_bruto * desconto_INSS/100;
	salario_liquido = salario_bruto - salario_desconto_INSS;
	
	printf("O salário líquido será: %.2f", salario_liquido);
}
