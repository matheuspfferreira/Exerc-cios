#include <stdio.h>
#include <string.h>

int main()
{
	char string[50], subString[25], stringTemporaria = "";
	int tamanhoString, ocorrencias = 0; 
	
	printf("Informe uma frase de ate cinquenta caracteres: ");
	gets(string);
	printf("Informe uma frase de ate vinte e cinco caracteres: ");
	gets(subString);
	
	tamanhoString = strlen(string);
	
	for (int i = 0; i < tamanhoString; i++) {
	    
	    switch (string[i]) {
	        
	        case ' ':
	            printf("%s", stringTemporaria);
	            if (strcmp(subString, stringTemporaria) == 0) {
	                ocorrencias++;
	            }
	            break;
	            
	        default:
	            strcat(stringTemporaria, string[i]);
	            break;
	    }
	
	} printf("%d", ocorrencias);
    
    
	return 0;
	
}