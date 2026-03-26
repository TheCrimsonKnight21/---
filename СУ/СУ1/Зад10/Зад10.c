#include <stdio.h>
int main()
{
    double radius, sinus, cosine, tangent, cotangent;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    sinus = radius / 1;
    cosine = radius / 1;
    tangent = sinus / cosine;
    cotangent = cosine / sinus;
    printf("Sinus: %.2lf\n", sinus);
    printf("Cosine: %.2lf\n", cosine);
    printf("Tangent: %.2lf\n", tangent);
    printf("Cotangent: %.2lf\n", cotangent);
    return 0;
}