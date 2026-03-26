#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void task1()
{
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d\n", i);
    }

}

void task2()
{
    for (int i = 1; i <= 10; i++) 
    {
        char arr[10];
        for (int j = 0; j < i; j++) 
        {
            arr[j] = '*';
        }
        arr[i] = '\0';  
        printf("%s\n", arr);
    }
    
}

void task3()
{
   char symbol;
   printf("Enter a symbol:");
    scanf(" %c", &symbol);
    char row1[11];
    char row2[11];
    for (int i = 0; i < 10; i++) 
    {
        row1[i] = symbol;
        
    }
    row1[10] = '\0';
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
    row2[10] = '\0';

    printf("%s\n", row1);
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", row2);
    }
    printf("%s\n", row1);
}

void task4()
{
    int size;
    char symbol;
    printf("Enter a symbol: ");
    scanf(" %c", &symbol);
    printf("Enter the size of the pyramid: ");
    scanf(" %d", &size);
    char *row = malloc(size + 1);
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
        row[size] = '\0';

        printf("%s\n", row);

    }
    for (int i = 0; i < size; i++) 
    {
        row[i] = symbol;
    }
        row[size] = '\0';
        printf("%s\n", row);

        printf("\n");

        // Inverted Pyramid
        
        printf("%s\n", row);
    for (int i = (size)/2; i > 0; i--) 
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
        row[size] = '\0';
        printf("%s\n", row);

    }

}

void task5()
{
   int inches;
    float  mm,cm,dc,m;
    printf("Enter the number of inches: ");
    scanf(" %d", &inches);

    mm = inches * 25.4;
    cm = mm / 10;
    dc = cm / 10;
    m = cm / 100;

    printf("Inches: %d\n", inches);
    printf("Millimeters: %f\n", mm);
    printf("Centimeters: %f\n", cm);
    printf("Decimeters: %f\n", dc);
    printf("Meters: %f\n", m);


}

void task6()
{
    double celsius, fahrenheit;;

    printf("Enter temperature in Celsius: ");
    scanf(" %lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    
}

void task7()
{
    double degrees, radians;
    printf("Enter angle in degrees: ");
    scanf(" %lf", &degrees);
    radians = degrees * (3.14159265358979323846 / 180.0);
    printf("Angle in radians: %.6lf\n", radians);
    
}

void task8()
{
     double lev,dolars, euros, pounds;
    printf("Enter amount in levs: ");
    scanf(" %lf", &lev);
    dolars = lev * 0.56;
    euros = lev * 0.51;
    pounds = lev * 0.45;
    printf("Amount in dolars: %.2lf\n", dolars);
    printf("Amount in euros: %.2lf\n", euros);
    printf("Amount in pounds: %.2lf\n", pounds);
    
}

void task9()
{
    double a, b, h;
    printf("Enter the lengths of the two parallel sides (a and b) and the height (h) of the trapezoid: ");
    scanf(" %lf  %lf  %lf", &a, &b, &h);
    double area = ((a + b) / 2) * h;
    printf("The area of the trapezoid is: %.2lf\n", area);

}

void task10()
{
    double radius, sinus, cosine, tangent, cotangent;
    printf("Enter the radius of the circle: ");
    scanf(" %lf", &radius);
    sinus = radius / 1;
    cosine = radius / 1;
    tangent = sinus / cosine;
    cotangent = cosine / sinus;
    printf("Sinus: %.2lf\n", sinus);
    printf("Cosine: %.2lf\n", cosine);
    printf("Tangent: %.2lf\n", tangent);
    printf("Cotangent: %.2lf\n", cotangent);
}

void task11()
{
     double x1, y1, x2, y2;
    double width, height, area;
    
    printf("Enter the coordinates of point A (x1 y1): ");
    scanf(" %lf  %lf", &x1, &y1);
    
    printf("Enter the coordinates of point B (x2 y2): ");
    scanf(" %lf  %lf", &x2, &y2);
    

    width = fabs(x2 - x1);
    height = fabs(y2 - y1);
    area = width * height;
    
    printf("The area of the rectangle is: %.2f\n", area);
    
}

void task12()
{
    double x1, y1, x2, y2, x3, y3;
    double area;
    
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf(" %lf  %lf", &x1, &y1);
    
    printf("Enter coordinates of the second point (x2 y2): ");
    scanf(" %lf  %lf", &x2, &y2);
    
    printf("Enter coordinates of the third point (x3 y3): ");
    scanf(" %lf  %lf", &x3, &y3);
    
    area = fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
    
    printf("The area of the triangle is: %.2f\n", area);
}

void task13()
{
      double w, h;
    
    printf("Enter room width (meters): ");
    scanf(" %lf", &w);
    
    printf("Enter room height (meters): ");
    scanf("%lf", &h);
    
    double w_cm = w * 100;
    double h_cm = h * 100;
    
    double desk_width = 70;   
    double desk_height = 120; 
    

    double corridor_width = 100; 
    
    double left_width = (w_cm - corridor_width) / 2;
    int desks_per_row_left = (int)(left_width / desk_width);
    int rows_left = (int)(h_cm / desk_height);
    int desks_left = desks_per_row_left * rows_left;
    
    double right_width = (w_cm - corridor_width) / 2;
    int desks_per_row_right = (int)(right_width / desk_width);
    int rows_right = (int)(h_cm / desk_height);
    int desks_right = desks_per_row_right * rows_right;
    
    int total_desks = desks_left + desks_right;
    
    total_desks -= 1;
    total_desks -= 2; 
    
    printf("\nNumber of workstations: %d\n", total_desks);
}

void task14()
{
    double vegi_price, fruit_price, vegi_weight, fruit_weight;
    
    printf("Enter vegetables price (BGN): ");
    scanf(" %lf", &vegi_price);
    
    printf("Enter fruits price (BGN): ");
    scanf(" %lf", &fruit_price);
    
    printf("Enter vegetables weight (kg): ");
    scanf(" %lf", &vegi_weight);
    
    printf("Enter fruits weight (kg): ");
    scanf(" %lf", &fruit_weight);
    
    double total_cost = (vegi_price * vegi_weight) + (fruit_price * fruit_weight);
    double total_cost_euros = total_cost * 0.51;
    printf("Total amount in euros: %.2f EUR\n", total_cost_euros);
    
}

void task15()
{
    int n, w, l, m, o;
    printf("Square length: ");
    scanf(" %d", &n);
    printf("Tile width: ");
    scanf(" %d", &w);
    printf("Tile length: ");
    scanf(" %d", &l);
    printf("Bench width: ");
    scanf(" %d", &m);
    printf("Bench length: ");
    scanf(" %d", &o);

    double time = 0.2;
    int area_square = n * n;
    int area_tile = w * l;
    int area_bench = m * o;
    int area_to_cover = area_square - area_bench;
    double tiles_needed = (double)area_to_cover / area_tile;
    double total_time = tiles_needed * time;
    printf("Required time: %.2f minutes\n", total_time);
}

void task16()
{
    int N, M;
    float rate;
    
    printf("Enter days worked per month: ");
    scanf(" %d", &N);
    printf("Enter dollars per day: ");
    scanf(" %d", &M);
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
}

int main()
{
    int running = 1;
    printf("Enter task number (1-16): ");
    char task_number[10];
    while (1)
    {
        scanf(" %s", task_number);
        if (_stricmp(task_number, "STOP") == 0) 
        {
            break;
        }
        switch (strtol(task_number, NULL, 10))
        {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            task7();
            break;
        case 8:
            task8();
            break;
        case 9:
            task9();
            break;
        case 10:
            task10();
            break;
        case 11:
            task11();
            break;
        case 12:
            task12();
            break;
        case 13:
            task13();
            break;
        case 14:
            task14();
            break;
        case 15:
            task15();
            break;
        case 16:
            task16();
            break;
        default:
            printf("Invalid input.\n");
            break;
        }
        printf("Enter task number (1-16) or STOP to end program: ");
    }
    return 0;
}