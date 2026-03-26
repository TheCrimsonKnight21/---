#include <stdio.h>


int numberSwitcher(int a, int b);
int main()
{
    int a, b;
    printf("Enter 2 numbers to switch around: ");
    scanf(" %d %d", &a, &b);
    a , b = numberSwitcher(a, b);
    
    return 0;
}
int numberSwitcher(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    return a, b;
}