#include <stdio.h>
#include <locale.h>
int main(){
setlocale(0,"Portuguese");

int numeros[5], i;

for(i=0 ; i<5 ; i++){
	printf("Digite o %do. número:", i + 1);
	scanf("%d", &numeros[i]);
}
for(i=0; i<5; i++)
	printf("O valor da posição %da. é:%d\n", i+1, numeros[i]);
	
for(i=4; i>=5; i--)
printf("O valor da posição %da. é:%d\n", i+1, numeros[i]);
}
