#include <stdio.h>
int main()
{
    char symbol;
    scanf("%c", &symbol);
    char row1[11];
    char row2[11];
    for (int i = 0; i < 10; i++) 
    {
        row1[i] = symbol;
        
    }
    
    for (int i = 0; i < 10; i++) 
    {
        if (i == 0 || i == 9) 
        {
            row2[i] = symbol;
        } 
        else 
        {
            row2[i] = ' ';
        }
    }
    

    printf("%s\n", row1);
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", row2);
    }
    printf("%s\n", row1);
    return 0;
} 