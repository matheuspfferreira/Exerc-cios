/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char palavra[30];
	int tamanhoPalavra; 
	
	printf("Informe uma palavra: ");
	gets(palavra);
	tamanhoPalavra = strlen(palavra);
	
	for (int i = tamanhoPalavra; i >= 0; i--) {
	    printf("%c", palavra[i]);
	} return 0;
	
}