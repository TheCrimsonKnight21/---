#include <stdio.h>
int main()
{
    double vegi_price, fruit_price, vegi_weight, fruit_weight;
    
    printf("Enter vegetables price (BGN): ");
    scanf("%lf", &vegi_price);
    
    printf("Enter fruits price (BGN): ");
    scanf("%lf", &fruit_price);
    
    printf("Enter vegetables weight (kg): ");
    scanf("%lf", &vegi_weight);
    
    printf("Enter fruits weight (kg): ");
    scanf("%lf", &fruit_weight);
    
    double total_cost = (vegi_price * vegi_weight) + (fruit_price * fruit_weight);
    double total_cost_euros = total_cost * 0.51;
    printf("Total amount in euros: %.2f EUR\n", total_cost_euros);
    
    return 0;
}