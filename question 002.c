#include <stdio.h>

// Function declaration
int add(int a, int b);

int main()
{
    int firstNumber;
    int secondNumber;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    // Function call
    sum = add(firstNumber, secondNumber);

    printf("Sum = %d\n", sum);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}