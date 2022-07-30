/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variável para contar o número de passos:
    unsigned char numero_de_passos;
    unsigned char numero_de_passos_ideal;
    numero_de_passos_ideal = 15;
    
    //Inserindo valor 1 na variavel
    numero_de_passos = 1;
    
    //Print do numero de passos
    printf("passo: %d \n",numero_de_passos);
    printf("Faz o bolo \n");
    
    numero_de_passos = numero_de_passos+1;
    printf("passo: %d \n",numero_de_passos);
    printf("Ver se ficou bom \n");
    
    numero_de_passos = numero_de_passos+1;  //numero_de_passos++;
    printf("passo: %d \n",numero_de_passos);
    printf("Ver se ficou bom 2 \n");
    
    if(numero_de_passos==numero_de_passos_ideal)
    {
        printf("Bom Apetite! \n");
    }
    else
    {
        printf("Compre um bolo que você não sabe fazer ^^ \n");
    }
    
    return 0;
}
