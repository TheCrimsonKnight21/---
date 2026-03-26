#include <stdio.h>
int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    int P = 2 * (a + b);
    printf("Perimiter is %d\n", P);
    int S = a * b;
    printf("Area is %d\n", S);
    return 0;
}