#include <stdio.h>
#include <locale.h>
int main(){
setlocale(0,"Portuguese");

int numeros[5], i;

for(i=0 ; i<5 ; i++){
	printf("Digite o %do. n�mero:", i + 1);
	scanf("%d", &numeros[i]);
}
for(i=0; i<5; i++)
	printf("O valor da posi��o %da. �:%d\n", i+1, numeros[i]);
	
for(i=4; i>=5; i--)
printf("O valor da posi��o %da. �:%d\n", i+1, numeros[i]);
}
