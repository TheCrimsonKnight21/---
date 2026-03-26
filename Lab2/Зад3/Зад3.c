#include <stdio.h>

int isEven(int n);

int main()
{
    int n;
    printf("Enver number to check if its even: ");
    scanf(" %d", &n);

    if (isEven(n))
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}


int isEven(int n)
{
    return n % 2 == 0;
}