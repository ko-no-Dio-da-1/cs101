#include <stdio.h>

int main()
{
   double n = 0.0;  
   for(int i = 0; i < 300000; i++) {
       n = n + 4.0 / (2 * i + 1);  
       n = n - 4.0 / (2 * i + 3); 
       i++;
      
   }
   printf("%.5f", n);  

   return 0;
}
