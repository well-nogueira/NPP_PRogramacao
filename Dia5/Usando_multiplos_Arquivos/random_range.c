/*Função Random com limite em um Range de números gerados*/

#include "random_range.h"

int random_range()
{
    int a;
    int max, min;
    max = 3348;
    min = 1000;
    
    //sem aplicar um limite de range para o random gerado
    a = rand();
    printf("Random number sem limite do range: %d \n", a);
    
    // Limitado o range do numero aleatório gerado
    a = (a % (max - min + 1)) + min;
    return a;
}
