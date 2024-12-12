#include <stdio.h>

int main() {
    int i = 12345; 
    int result = i;

    if (i >= 1000) {
        int thousands = (i / 1000) % 10; 
        int units = i % 10;             

        
        result = i - thousands * 1000 - units + thousands + units * 1000;
    }

    printf("交換後: %d\n", result);

    return 0;
}
