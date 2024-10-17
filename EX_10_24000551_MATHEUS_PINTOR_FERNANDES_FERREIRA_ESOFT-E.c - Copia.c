/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[50], palavra[25], vetorFrase[50]; 
    int tamanhoFrase, palavrasRegistradas = 0; 
    
    printf("Informe uma frase: ");
    gets(frase);
    tamanhoFrase = strlen(frase);
    
    for (int i = 0; i < tamanhoFrase; i++) {
        
        switch (frase[i]) {
            case ' ':
                vetorFrase[palavrasRegistradas] = palavra;
                palavrasRegistradas++;
                break;
            default:
                strcat(palavra, frase[i]);
                break;
        }

    } 
    
    

    return 0;
}