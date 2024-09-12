#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// mengurutkan bilangan

int main() {
    int numberCount;
    scanf("%d", &numberCount);
    
    int numbers[numberCount+1], temp;
    for (int i=0; i<numberCount; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i=0; i<numberCount; i++) {
        for (int j=i+1; j<numberCount; j++) {
            if (numbers[j] < numbers[i]) {
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    for (int i=0; i<numberCount; i++) {
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}
