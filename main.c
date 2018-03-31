#include<stdio.h>

int factorial(int number) {
    if(number == 0) 
        return 1;
    return number * factorial(number - 1);
}

int main() {
    printf("Factorial of 0 = %d\n", factorial(0));
    printf("Factorial of 1 = %d\n", factorial(1));
    printf("Factorial of 2 = %d\n", factorial(2));
    printf("Factorial of 3 = %d\n", factorial(3));
    return 0;
}
