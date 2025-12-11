#include <stdio.h>

#define MAX_IDS 10

int main() {
    int ids[MAX_IDS] = {0};

    // for loops
    printf("For loop\n");
    int i = 0; //iterator
    for (i = 0; i < MAX_IDS; i++) {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);
    }

    // while loops
    printf("While loop\n");
    i = 0;
    while(i < MAX_IDS) {
        ids[i] = i*13;
        printf("%d: %d\n", i, ids[i]);
        i++;
    }
    
    // do while
    printf("Do while\n");
    i = 0;
    do {
        ids[i] = i*12;
        printf("%d: %d\n", i, ids[i]);
        i++;
    } while(i < MAX_IDS);
}
