#include <stdio.h>
int main()
{
    int inches;
    float  mm,cm,dc,m;
    printf("Enter the number of inches: ");
    scanf("%d", &inches);

    mm = inches * 25.4;
    cm = mm / 10;
    dc = cm / 10;
    m = cm / 100;

    printf("Inches: %d\n", inches);
    printf("Millimeters: %f\n", mm);
    printf("Centimeters: %f\n", cm);
    printf("Decimeters: %f\n", dc);
    printf("Meters: %f\n", m);

    return 0;
}