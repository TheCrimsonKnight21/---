#include <stdio.h>
int main()
{
    int size = 9;
    char symbol;
    scanf("%c", &symbol);
    char row[9];
    // Normal Pyramid
    for (int i = 1; i < (size+ 1)/2; i++) 
    {
        for (int j = 0; j < size; j++) 
        {

            if (j == size/2 - i + 1 || j == size/2 + i - 1) 
            {
                row[j] = symbol;
            }
            else 
            {
                row[j] = ' ';
            }
        }
        printf("%s\n", row);

    }
    for (int i = 0; i < size; i++) 
    {
        row[i] = symbol;
    }
        printf("%s\n", row);

        printf("\n");

        // Inverted Pyramid
        printf("%s\n", row);
    for (int i = (size+ 1)/2; i > 0; i--) 
    {
        for (int j = 0; j < size; j++) 
        {

            if (j == size/2 - i + 1 || j == size/2 + i - 1) 
            {
                row[j] = symbol;
            }
            else 
            {
                row[j] = ' ';
            }
        }
        printf("%s\n", row);

    }
    return 0;
}