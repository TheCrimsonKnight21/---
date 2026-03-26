#include <stdio.h>



int main(){

    int n = 0;
    int array[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = n++;

        }
        
    }

    //Main Diagnal
    printf("Main Diagnal: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if( i == j){
                printf("%d ", array[i][j]);
            }
        }
        
    }
    printf("\n Secondary Diagnal: \n");
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i + j == 4){
                printf("%d ", array[i][j]);
            }
        }
        
    }
    printf("\n Elemments Over Main Diagnal: \n");
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if( i < j){
                printf("%d ", array[i][j]);
            }
        }
        
    }
     printf("\n Elemments Under Main Diagnal: \n");
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if( i > j){
                printf("%d ", array[i][j]);
            }
        }
        
    }

    return 0;
}