#include <stdio.h>
#include "op.h"



int main() 
{
    int a = 10;
    int b = 2;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %d\n", div(a, b));
    printf("Modulus: %d\n", mod(a, b));

    return 0;
}
