#include <stdio.h>
#include "calculator.h"

int main(void) {
    int num1 = 20;
    int num2 = 5;

    printf("Hello world!\n");
    printf("Welcome!\n");

    printf("Sum = %d\n", add(num1, num2));
    printf("Difference = %d\n", sub(num1, num2));
}
