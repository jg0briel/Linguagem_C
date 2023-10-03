/*1/* 10) .Fazer um programa que codifica uma string pelo método ZENIT-POLAR
 Z E N I T
 P O L A R
Ou seja, onde aparece um 'Z' no string de entrada, aparecerá um 'P' na saída; e,
semelhantemente, onde aparece um 'P' no string de entrada, aparecerá um 'Z' na saída. Isto
deve ocorrer para todos os pares em ZENIT-POLAR, maiúsculas e minúsculas. As outras
letras não são alteradas.
Por exemplo, o string "Parabens a voce" é codificado para "Zitibols i veco". Ao se
aplicar duas vezes a transformação, obtém-se o mesmo string, ou seja, a codificação de
"Zitibols i veco" é "Parabens a voce".*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int i;

    printf("Digite uma string: ");
    gets(frase);

    for (i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        switch (c) {
            case 'Z':
            case 'z':
                frase[i] = (c == 'Z') ? 'P' : 'p';
                break;
            case 'E':
            case 'e':
                frase[i] = (c == 'E') ? 'O' : 'o';
                break;
            case 'N':
            case 'n':
                frase[i] = (c == 'N') ? 'L' : 'l';
                break;
            case 'I':
            case 'i':
                frase[i] = (c == 'I') ? 'A' : 'a';
                break;
            case 'P':
            case 'p':
                frase[i] = (c == 'P') ? 'Z' : 'z';
                break;
            case 'O':
            case 'o':
                frase[i] = (c == 'O') ? 'E' : 'e';
                break;
            case 'L':
            case 'l':
                frase[i] = (c == 'L') ? 'N' : 'n';
                break;
            case 'A':
            case 'a':
                frase[i] = (c == 'A') ? 'I' : 'i';
                break;
            case 'R':
            case 'r':
                frase[i] = (c == 'R') ? 'T' : 't';
                break;
        }
    }

    printf("A frase codificada fica: %s\n", frase);

}
