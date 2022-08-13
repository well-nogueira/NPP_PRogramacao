/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int random_num;
    int max, min;
    max = 3348;
    min = 1000;
    
    //sem aplicar um limite de range para o random gerado
    a = rand();
    printf("Random umber sem limite do range: %d \n", a);
    
    // Limitado o range do numero aleatório gerado
    random_num = (a % (max - min + 1)) + min;
    printf("Exercício: %d", random_num);
    
    return 0;
}
