#include <stdio.h>



int main(){
    int var, *ip;
    ip = &var;

    printf("Address of the variable: %x\n", ip);
    printf("Value of the adress: %x\n", *ip);

    return 0;
}