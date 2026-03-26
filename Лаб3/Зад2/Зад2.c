#include <stdio.h>



int main(){
    int a = 10,b = 5;
    int *ap, *bp;
    ap = &a;
    bp = &b;
    int sum = *ap + *bp;
    int dif = *ap - *bp;
    int mult = *ap * *bp;
    int dev = *ap / *bp;

    printf("Sum: %d, Difference: %d, Multiplication: %d, Devition: %d", sum, dif, mult, dev);
   

    return 0;
}