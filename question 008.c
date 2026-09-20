#include <stdio.h>

// Function declaration
void multiplicationTable(int number);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call
    multiplicationTable(number);

    return 0;
}

// Function definition
void multiplicationTable(int number)
{
    int counter;

    for (counter = 1; counter <= 12; counter++)
    {
        printf("%d x %d = %d\n", number, counter, number * counter);
    }
}