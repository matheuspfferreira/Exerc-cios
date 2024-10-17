/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char palavra[30], caractereSubstituto = '4';
    int tamanhoPalavra;
    
    printf("Informe uma palava: ");
    gets(palavra);
    tamanhoPalavra = strlen(palavra);
    
    for (int i = 0; i < tamanhoPalavra; i++) {
        switch (palavra[i]) {
            case 'A':
                palavra[i] = caractereSubstituto;
                break;
            default:
                break;
        }
    } printf("%s", palavra);
	return 0;
	
}