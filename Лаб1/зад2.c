#include <stdio.h>
int main() {
   for (int i = 0; i <= 127; i++) 
   {
       char ch = (char)i;
       printf("%d %c\n", i, ch);
   }
    return 0;
    
}