#include <stdio.h>
int main()
{
    double a, b, h;
    printf("Enter the lengths of the two parallel sides (a and b) and the height (h) of the trapezoid: ");
    scanf("%lf %lf %lf", &a, &b, &h);
    double area = ((a + b) / 2) * h;
    printf("The area of the trapezoid is: %.2lf\n", area);

    return 0;
}