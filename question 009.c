#include <stdio.h>

// Function declaration
int findLargest(int a, int b, int c);

int main()
{
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int largest;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Enter third number: ");
    scanf("%d", &thirdNumber);

    // Function call
    largest = findLargest(firstNumber, secondNumber, thirdNumber);

    printf("Largest Number = %d\n", largest);

    return 0;
}

// Function definition
int findLargest(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return largest;
}