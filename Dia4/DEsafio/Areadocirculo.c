#include <stdio.h>
#include <math.h>
 
int main() {
 float R;
 float pi = 3.14159;
 float A;
 float R2;
 
 R = 150.00;
 R2 = pow(R,2);
 A = pi*R2;
 
 printf("O valor é: %f", A);
    return 0;
}