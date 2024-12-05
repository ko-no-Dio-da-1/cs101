#include <stdio.h>

int main() {
    int i = 300;

    if (i<=30) {
        printf("免費");
    } else if(i>=240) {
        printf("240");
    }
     else{
         if(i%30){
             int j =((i/30)+1)*30;
             printf("%d 元",j);
         }
     else{
         printf("%d 元", i);
     }
         
     }
    return 0;
}
