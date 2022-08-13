/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Incluir bibliotecas*/
#include <stdio.h>

/*Configurações e definições gerais*/
#define valor1 1

/*Declaração de protótipos de função*/
char soma(char a, char b);

/*Declaração de variáveis globais*/
char resultado_soma;
char x = 2;
char x1 = 3;

/*Função Main*/
void main(void)
{
    /*Inicializar timer, funções, periféricos, etc.*/
    char i = 0
    /*Loop Infinito*/
    while(1)
    {
        resultado_soma = soma(x,x1);
    }
    
}



char soma(char a, char b)
{
    char c;
    c=a+b;
    return c
}
