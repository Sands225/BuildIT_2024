#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// permainan kata unik

int checkIfDifferent(char firstWord[], char secondWord[]) {
    if (strlen(firstWord) != strlen(secondWord)) {
        return 1;
    }
    return 0;
}

int checkIfSimilar(char firstWord[], char secondWord[]) {
    for (int i=0; i<strlen(firstWord); i++) {
        if (firstWord[i] != secondWord[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char firstWord[105], secondWord[105];
    _Bool similar, different;
    
    scanf("%s %s", firstWord, secondWord);
 
    if (checkIfDifferent(firstWord, secondWord)) {
        printf("BERBEDA");
    } else if (checkIfSimilar(firstWord, secondWord)) {
        printf("MIRIP");
    } else {
        printf("IDENTIK");
    }
    
    return 0;
}
