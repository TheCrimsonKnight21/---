#include <stdio.h>

double squareAreaCalc(double a);
double rectangleAreaCalc(double a, double b);
double triangleAreaCalc(double a);
double circleAreaCalc(double r);

int main()
{
    int n;
    printf("Enter code of figure:\n 1-Square\n2-Rectangle\n3-Triangle\n4-Circle\n");
    scanf(" %d", &n);
    float a, b, r;
    switch (n)
    {
    case 1:
        printf("Enter side of square:");
        scanf(" %f", &a);
        printf("Area of square: %f", squareAreaCalc(a));
        break;
    case 2:
        printf("Enter sides of square(a b):");
        scanf(" %f %f", &a, &b);
        printf("Area of rectangle: %f", rectangleAreaCalc(a, b));
        break;
    case 3:
        printf("Enter side of triangle:");
        scanf(" %f", &a);
        printf("Area of triangle: %f", triangleAreaCalc(a));
        break;
    case 4:
        printf("Enter radius of circle:");
        scanf(" %f", &r);
        printf("Area of circle: %f", circleAreaCalc(r));
        break;
    default:
        break;
    }
    return 0;
}

double squareAreaCalc(double a)
{
    return a * a;
}

double rectangleAreaCalc(double a, double b)
{
    return a * b;
}

double triangleAreaCalc(double a)
{
    return a * a / 2;
}

double circleAreaCalc(double r)
{
    return r * r * 3.14;
}