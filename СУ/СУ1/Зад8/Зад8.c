#include <stdio.h>
int main()
{
   double lev,dolars, euros, pounds;
    printf("Enter amount in levs: ");
    scanf("%lf", &lev);
    dolars = lev * 0.56;
    euros = lev * 0.51;
    pounds = lev * 0.45;
    printf("Amount in dolars: %.2lf\n", dolars);
    printf("Amount in euros: %.2lf\n", euros);
    printf("Amount in pounds: %.2lf\n", pounds);
    return 0;
}