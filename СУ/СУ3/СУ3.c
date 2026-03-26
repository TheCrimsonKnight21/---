#include <stdio.h>
#include <stdlib.h>
void Ex1(int *array, int N);
void Ex2(int *array, int N);
void Ex3(int *array, int N);
void Ex4(int *array, int N);
void Ex5(int *array, int N);
void Ex6(int *array, int N);
void Ex7(int *array, int N);
void Ex8();
void Ex9(int *array, int N);


int compare(const void *a, const void *b);

int main(){
    int n;
    printf("Enter number of ex: ");
    scanf(" %d", &n);
    if( n == 8){
        ex8();
    }
    else{
     int N;
    printf("Amount of numbers: ");
    scanf(" %d", &N);

    int *array = malloc(N * sizeof(int));
    for (size_t i = 0; i < N; i++)
    {

        printf("Enter number: ");
        scanf(" %d", &array[i]);
    }
    switch (n)
{
    case 1:
        Ex1(array, N);
        break;

    case 2:
        Ex2(array, N);
        break;

    case 3:
        Ex3(array, N);
        break;

    case 4:
        Ex4(array, N);
        break;

    case 5:
        Ex5(array, N);
        break;

    case 6:
        Ex6(array, N);
        break;

    case 7:
        Ex7(array, N);
        break;

    case 9:
        Ex9(array, N);
        break;

    default:
        break;
}
    
    }
    return 0;
}

void Ex1(int *array, int N){
   

    int position = 0;
    int highest = 1;
    int count = 0;
    for (size_t i = 0; i < N -1; i++)
    {

        if(array[i] < array[i + 1] ){
            count++;
        }
        else{
            count = 0;
        }
        if ( count > highest){
            highest = count;
            position = i- count  + 1;
        }
            
        
    }
    printf("Longest platform is %d numbers long and starts from index %d.", highest + 1, position);

    
}
void Ex2(int *array, int N){
    int is_complete = 0;
    for (size_t i = 1; i < N - 1; i+= 2)
    {
        if(array[i - 1] < array[i] && array[i] > array[i + 1]){
            is_complete = 1;
        }
        else{
            is_complete = 0;
        }
    }
    if (is_complete){
        printf("The reletions are complete!");
    }
    else{
        printf("The reletions are not complete!");
    }
    
}
void Ex3(int *array, int N){
    printf("Array in normal order: \n");
    for (size_t i = 0; i < N; i++)
    {
        printf(" %d", array[i]);
        if(i< N - 1){
            printf(", ");
        }
    }
    
    for (size_t i = 0; i < N / 2; i++)
    {
        int old = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = old;
    }
    printf("\nArray in opposite order: \n");
     for (size_t i = 0; i < N; i++)
    {
        printf(" %d", array[i]);
        if(i< N - 1){
            printf(", ");
        }
    }

}
void Ex4(int *array, int N){
    int K;
    printf("Amount of shift: ");
    scanf(" %d", &K);
    int *shift_array = malloc(N * sizeof(int));
    for (size_t i = 0; i < N; i++)
    {
        int position = i + K;
        if (position > N - 1){
            position -= N;
        }
        shift_array[position] = array[i];
    }
    printf("Shifted array: \n");
    for (size_t i = 0; i < N; i++)
    {
        printf(" %d", shift_array[i]);
        if(i< N - 1){
            printf(", ");
        }
    }
    

}
void Ex5(int *array, int N){
   

    int K;
    printf("Which element from the order: ");
    scanf(" %d", &K);
    int count = 0;
    int hightest = array[0];
    qsort(array,N,sizeof(int),compare);
    printf("The %d highest element is: %d", K, array[K - 1]);
}
void Ex6(int *array, int N){
    int position = 0;
    int highest = 1;
    int count_up = 0;
    int count_down = 0;
    for (size_t i = 0; i < N -1; i++)
    {

        if(array[i] < array[i + 1] ){
            count_up++;
            count_down = 0;
        }
        else{
            count_down++;
            count_up = 0;
        }
        if ( count_up > highest){
            highest = count_up;
            position = i- count_up  + 1;
        }
        else if(count_down > highest){
            highest = count_down;
            position = i - count_down + 1;
        }
        
        
    }
    printf("Biggest monotone sub-array: ");
     for (size_t i = position; i < position + highest + 1; i++)
    {
        printf(" %d", array[i]);
        if(i< position + highest){
            printf(", ");
        }
    }

}
void Ex7(int *array, int N){
    int K;
    printf("Print sum to find: ");
    scanf(" %d", &K);
    int sum = 0;
    int count = 0;
    for (size_t i = 0; i < N; i++)
    {   
        count++;
        sum += array[i];
        if (sum > K){
            int num = array[i - count + 1];
            sum = sum - num;
            count--;
        }
        if (sum == K){
        printf("The numbers from the array = to %d are: ", K);
        for (size_t j = i - count + 1; j < i + 1; j++)
        {
            printf(" %d", array[j]);
            if(j< i){
                printf(", ");
            }
        }
        break;
        }
    }
    
}
void Ex8(){
    int array[20];
    for (size_t i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf(" %d",array[i]);

    }
    int pos, num;
    do
    {
        
        printf("Enter number and position(or 0 to end) seperated by \", \": ");
        scanf("%d, %d", num, pos);

        array[pos] =num;
    } while (num != 0);
    for (size_t i = 0; i < sizeof(array)/ sizeof(int); i++)
    {
        printf(" %d", array[i]);
        if(i< sizeof(array)/ sizeof(int) - 1){
            printf(", ");
        }
    }
    
}
void Ex9(int *array, int N){
     int position = 0;
    int highest = 1;
    int count = 0;
    for (size_t i = 0; i < N -1; i++)
    {

        if(array[i] == array[i + 1] ){
            count++;
        }
        else{
            count = 0;
        }
        if ( count > highest){
            highest = count;
            position = i- count  + 1;
        }
            
        
    }
     for (size_t i = position; i < position + highest + 1; i++)
        {
            printf(" %d", array[i]);
            if(i< position + highest){
                printf(", ");
            }
        }
}



int compare(const void *a, const void *b) {
        return (*(int*)b - *(int*)a);
    }

