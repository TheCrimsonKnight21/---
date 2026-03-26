#include <stdio.h>

int main(){

    int n = 0, sum = 0, sum1 = 0;
    int magic = 1;
    int array[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = n++;

        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           sum += array[i][j];
 
        }
        if ( i == 0){
            sum1 = sum;
        }
        else if(sum != sum1){
            magic = 0;
            break;
        }
        sum = 0;
    }
    if (magic == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
            sum += array[j][i];

            }
            if(sum != sum1){
                magic = 0;
                break;
            }
        }
    }

    if (magic == 1){
        printf("This Square is magic!");
    }
    else{
        printf("This Square is not magic!");
    }


    return 0;
}