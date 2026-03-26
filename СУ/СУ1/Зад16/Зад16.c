#include <stdio.h>
int main()
{
    int N, M;
    float rate;
    
    printf("Enter days worked per month: ");
    scanf("%d", &N);
    printf("Enter dollars per day: ");
    scanf("%d", &M);
    printf("Enter USD to BGN exchange rate: ");
    scanf("%f", &rate);
    
    float monthly_salary = N * M;
    float annual_salary = monthly_salary * 12;
    float bonus = monthly_salary * 2.5;
    float total_income = annual_salary + bonus;
    float taxes = total_income * 0.25;
    float net_income = total_income - taxes;
    float net_income_bgn = net_income * rate;
    float daily_earnings = net_income_bgn / 365;
    
    printf("Daily net earnings in BGN: %.2f\n", daily_earnings);

    return 0;
}