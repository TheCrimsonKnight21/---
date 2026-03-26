#include <stdio.h>

void Zad1();
void Zad2();
void Zad3();
void Zad4();
void Zad5();
void Zad6();

int main()
{   

    int n;
    printf("Enter exercise number: ");
    scanf(" %d", &n);
    switch (n)
    {
    case 1:
        Zad1();
        break;
    case 2:
        Zad2();
        break;
    case 3:
        Zad1();
        break;
    case 4:
        Zad4();
        break;
    case 5:
        Zad5();
        break;
    case 6:
        Zad6();
        break;
    default:
        break;
    }
    return 0;
}


void Zad1()
{
    int i;
    scanf(" %d" , &i);
    if (i >= 6)
    {
        printf("The number %d is higher or equal to 6.", i);
    }    
}
void Zad2()
{
    int i;
    scanf(" %d" , &i);
    if (i % 8 > 4)
    {
         printf("Remeiner of %i modulo 8 is higher then 4", i);
    }
}
void Zad3()
{
    int i, j, k;
    scanf(" %d %d %d" , &i, &j, &k);
    
}
void Zad4()
{
    int i;
    scanf(" %d" , &i);
    switch (i)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    default:
        break;
    }
}
void Zad5()
{
    int i;
    int is_incorrect = 0;
    printf("Enter number 1-7: ");
    scanf(" %d", &i);

    do
    {
        switch (i)
        {
        case 1:
            printf("Monday");
            is_incorrect = 0;
            break;
        case 2:
            printf("Tuesday");
            is_incorrect = 0;
            break;
        case 3:
            printf("Wednesday");
            is_incorrect = 0;
            break;
        case 4:
            printf("Thursday");
            is_incorrect = 0;
            break;
        case 5:
            printf("Friday");
            is_incorrect = 0;
            break;
        case 6:
            printf("Saturday");
            is_incorrect = 0;
            break;
        case 7:
            printf("Sunday");
            is_incorrect = 0;
            break;
        default:
            printf("Invalid number. Try again");
            scanf(" %d", &i);
            is_incorrect = 1;
            break;
        } 
    }while (is_incorrect);
}
void Zad6()
{
    int n;
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(i);
        }
    }
    
}


