#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// bilangan prima

int main() {
    long long int number;
    _Bool isPrime = 1;
    scanf("%lld", &number);

    if (number <= 1) {
        isPrime = 0;
    }

    for (long long int i=2; i*i <= number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}