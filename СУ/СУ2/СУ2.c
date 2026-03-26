#include <stdio.h>
float maxNumber(float numbers[]);
float minNumber(float numbers[]);
int findSmaller(int a, int b);
double bonusCalc(int number);
int calcTime(int hours, int minutes);
double clacBestTravel(int distance, char time);


void Zad1();
void Zad2();
void Zad3();
void Zad4();
void Zad5();
void Zad6();
void Zad7();
void Zad8();
void Zad9();
void Zad10();
void Zad11();
void Zad12();


int main()
{
    int exercise;
    printf("Enter number of exercise: ");
    scanf(" %d", &exercise);
    switch (exercise)
{
case 1:
    Zad1();
    break;

case 2:
    Zad2();
    break;

case 3:
    Zad3();
    break;

case 4:
    Zad4();
    break;

case 5:
    Zad5();
    break;

case 6:
    // Zad6();
    break;

case 7:
    Zad7();
    break;

case 8:
    Zad8();
    break;

case 9:
    Zad9();
    break;

case 10:
    Zad10();
    break;

case 11:
    Zad11();
    break;

case 12:
    break;

default:
    break;
}
    return 0;
}

void Zad1()
{
    int a,b;
    printf("Type 2 numbers: ");
    scanf("%d %d", &a, &b);
    a, b = findSmaller(a,b);
    printf("%d is smaller then %d",a, b);
    float numbers[100];
    printf("Type up to 100 numbers: ");
    for (int i = 0; i < 99; i++)
    {
        scanf(" %f", &numbers[i]);
    }
    printf("The biggest number in the array is: %f and the smallest one is: %f", maxNumber(numbers), minNumber(numbers));
}

void Zad2()
{
    int minutes, hours;
    printf("Type in hours then minutes: ");
    scanf(" %d %d", &hours, &minutes);
    hours , minutes = calcTime(0, minutes);
    printf("Time: %d:%02d", hours, minutes);
    
}

void Zad3()
{
    int a,b,c;
    printf("Type in 3 numbers: ");
    scanf(" %d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("The numbers are equal");
    }
    else
    {
        printf("The numbers are not equal");
    }
}

void Zad4()
{
    int points;
    printf("Enter amount of points: ");
    scanf(" %d", &points);
    printf("Point with bonus: %f" , bonusCalc(points));
}

void Zad5(){
    int a,b,c;
    printf("Enter runners times: ");
    scanf(" %d %d %d", &a, &b, &c);
    int time = a + b + c;
    int hours = 0, minutes;
    hours , minutes = calcTime(0, time);
    printf("Total time: %d:%d", hours,minutes);
}

void zad6(){
    float x,y,x1,x2,y1,y2;
    printf("Enter x1: ");
    scanf(" %f", &x1);
    printf("Enter x2: ");
    scanf(" %f", &x2);
    printf("Enter y1: ");
    scanf(" %f", &y1);
    printf("Enter y2: ");
    scanf(" %f", &y2);
    printf("Enter x: ");
    scanf(" %f", &x);
    printf("Enter y: ");
    scanf(" %f", &y);

    if (x > x1 && x < x2 && y > y1 && y < y2){
        printf("Inside");
    }
    else{
        printf("Outside");
    }
}

void Zad7(){
    int distance;
    char time;
    printf("Enter distance to travel ");
    scanf(" %d", &distance);
    printf("Enter time of day (day-d, night-n): ");
    scanf(" %c", &time);
    
    double taxiTotal = distance * 100, busTotal= distance * 100, trainTotal= distance * 100;

  
    if (distance  <= 20){
        busTotal = 0;
        busTotal += 0.09 * distance;
    }
    if (distance <= 100 && distance > 20){
        trainTotal = 0;
        trainTotal += 0.06 * distance;
    }
    {
          if (time = 'd'){
        taxiTotal = 0.7;
        taxiTotal += 0.79 * distance;
    }
    else{
        taxiTotal = 0.7;
        taxiTotal += 0.9 * distance;
    }
    }
    if (taxiTotal < busTotal && taxiTotal < trainTotal)
    printf("Taxi");
    else  if (trainTotal < busTotal && trainTotal < busTotal)
    printf("Train");
    else  if (busTotal < taxiTotal && busTotal < trainTotal)
    printf("Bus");
}

void Zad8(){
    int volume, hours, pipe1, pipe2, filled = 0;
    printf("Enter pool volume: ");
    scanf(" %d", &volume);
    printf("Enter pipe 1 capacity: ");
    scanf(" %d", &pipe1);
    printf("Enter pipe 2 capacity: ");
    scanf(" %d", &pipe2);
    printf("Enter time: ");
    scanf(" %d", &hours);

    for (int i = 0; i <= hours; i++)
    {
       filled += pipe1 + pipe2;
    }
    if (filled >= volume){
        printf("Pool fild");
    }
    else{
        printf("Pool not filled: %dl^3 left", volume - filled);
    }
    
}

void Zad9(){
    int yards, grapes, wineNeeded;
    printf("Enter vine yard size: ");
    scanf(" %d", &yards);
    printf("Enter kg grapes per m^2: ");
    scanf(" %d", &grapes);
    printf("Enter wine needed: ");
    scanf(" %d", &wineNeeded);
    double totalWine = (yards /100 *40) * grapes / 2.5;
    if(totalWine > wineNeeded){
        printf("Produced more wine than needed, %f left over", wineNeeded - totalWine);
    }
    else{
        printf("Did not produce enough wine");
    }
}

void Zad10(){
    int n;
    float p1 = 0,p2 = 0,p3 = 0,p4 = 0,p5 = 0;
    printf("Total amount of numbers: ");
    scanf(" %d", &n);
    int numbers[100];
    for (int i = 0; i < n; i++)
    {
        int j;
        scanf("%d", &j);
        numbers[i] = j;
        if (j < 200) {
            p1++;
        }
        else if (j >= 200 && j <= 399) {
            p2++;
        }
        else if (j >= 400 && j <= 599) {
            p3++;
        }
        else if (j >= 600 && j <= 799) {
            p4++;
        }
        else if (j >= 800 && j <= 1000) {
            p5++;
        }
        
    }
    p1 *= n/100;
    p2 *= n/100;
    p3 *= n/100;
    p4 *= n/100;
    p5 *= n/100;
    printf("p1: %f, p2: %f, p3: %f , p4: %f , p5: %f", p1, p2, p3, p4, p5);

    
}
void Zad11(){
    int n;
    printf("N: ");
    scanf(" %d", &n);
    char row[100];
    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j <= n *2; j++)
        {
            if (i == 0 && (j == 0 || j == n + 1 ))
            {
                row[j] = '/';
            }
            else if(i == 0 &&(j == n || j == n /2 * 2 + 1 )){
                row[j] = '\\';
            }
            else if(i == 0 && ((j > 0 && j < n + 1 ) || (j > n +1 && j < n * 2 ))){
                row[j] = '^';
            }
            else if(i == 0){
                row[j] = '_';
            }
            else if (i > 0 && i < n - 1){
                if (j == 0 || j == n* 2){
                    row[j] = '|';
                }
                else{
                    row[j] = ' ';
                }
            }
            else if( i == n -1 && (j > n /2 * 2 + 1 && j < n /2 * 2 + n /2 * 2 + 1 )){
                row[j] = '_';
            }
            else if (i == n && (j == 0 || j == n + 1 ))
            {
                row[j] = '\\';
            }
            else if(i == n &&(j == n || j == n /2 * 2 + 1 )){
                row[j] = '/';
            }
            else if(i == n && ((j > 0 && j < n + 1 ) || (j > n +1 && j < n * 2 - 1))){
                row[j] = '_';
            }
        }
        row[n * 2+ 2] = '\0';
        printf("%s\n", row);
    }
    
}

int calcTime(int hours, int minutes){
    
    while (minutes >= 60)
    {
        minutes -= 60;
        hours ++;
    }
    return hours, minutes;
}

double bonusCalc(int number)
{
    double final = number;
    if (number <= 100){
        final += 5;
    }
    else if(number > 100 && number <= 1000){
        final += number / 100 * 20;
    }
    else if(number > 1000){
        final += number /100 * 10;
    }
    if(number % 2 == 0){
        final += 1;
    }
    else if( number % 5 == 0){
        final += 2;
    }
    return final;
}

int findSmaller(int a, int b)
{
    if(a > b)
    {
        return b, a;
    }
    else
    {
        return a, b;
    }
}

float maxNumber(float numbers[])
{
    float max = numbers[0];
    for (int i = 1; i < sizeof(numbers) / sizeof(float) ; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    
    return max;
}

float minNumber(float numbers[])
{
    float min = numbers[0];
    for (int i = 1; i < sizeof( numbers) / sizeof(float) ; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    
    return min;
}