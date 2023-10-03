/*1/* 10) .Fazer um programa que codifica uma string pelo m�todo ZENIT-POLAR
 Z E N I T
 P O L A R
Ou seja, onde aparece um 'Z' no string de entrada, aparecer� um 'P' na sa�da; e,
semelhantemente, onde aparece um 'P' no string de entrada, aparecer� um 'Z' na sa�da. Isto
deve ocorrer para todos os pares em ZENIT-POLAR, mai�sculas e min�sculas. As outras
letras n�o s�o alteradas.
Por exemplo, o string "Parabens a voce" � codificado para "Zitibols i veco". Ao se
aplicar duas vezes a transforma��o, obt�m-se o mesmo string, ou seja, a codifica��o de
"Zitibols i veco" � "Parabens a voce".*/

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
