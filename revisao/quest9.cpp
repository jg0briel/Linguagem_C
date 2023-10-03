/*9) Algoritmo para ler um nome completo, com espaços e acentuação (atenção para o formato
passado para o scanf()). Em seguida exiba o nome de três formas diferentes:
a) texto normal, utilizando a máscara de formatação string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes – use o espaço para separar as
palavras*/

//a)
/*
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(0, "Portuguese");
	
	char nome[100];
	
	printf("Digite seu nome completo: ");
	scanf("%[^\n]s", nome);

	printf("O nome digitado foi: %s\n", nome);
}*/

//b)

#include <stdio.h>
#include <locale.h> 
#include <string.h>


int main() {
	setlocale(0,"Portuguese");
	
    char nome[100];
	int inicio;

    printf("Digite seu nome completo: ");
	scanf(" %[^\n]s", nome);

	printf("Você digitou: %s\n", nome);	
	
    for (inicio = 0; inicio < strlen(nome); inicio++) {
        if (nome[inicio] == ' ') {
            printf("\n");
        } else {
            printf("%c", nome[inicio]);
        }
    }
}
