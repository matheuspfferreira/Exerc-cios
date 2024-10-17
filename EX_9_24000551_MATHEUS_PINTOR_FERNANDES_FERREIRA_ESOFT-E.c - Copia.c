/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char palavra[50], caractere; 
    int opcao, tamanhoPalavra; 
    
    printf("Informe uma palavra: ");
    gets(palavra);
    printf("1 - Converter para maiusculo \n2 - Converter para minusculo\nSelecione a opcao desejada: ");
    scanf("%d", &opcao);
    tamanhoPalavra = strlen(palavra);
    
    switch (opcao) {
        case 1:
            for (int i = 0; i < tamanhoPalavra; i++) {
                caractere = palavra[i];
                caractere = toupper(i);
                printf("%c", palavra[i]);
            }
            break;
        case 2:
            for (int i = 0; i < tamanhoPalavra; i++) {
                caractere = palavra[i];
                caractere = tolower(i);
                printf("%c", palavra[i]);
            }
            break;
        default:
            printf("Opcao invalida");
    } return 0;
	
}