#include <stdio.h>

#define MAX_SIZE 10

int main(int argc, char **argv) {

    // array is contiguous block of memory

    // create an array of 10 integers 
    int myarray[MAX_SIZE] = {0,2,4,6,8,10,12,14,16,18};

    // strings are array of chars
    
    // this when printing with %s will print out a <?> unicode as its not null terminated with \0, it will keep reading past until it hits null
    char uglyWay[] = {'h', 'i'};
    
    // so to initialize it, make sure to add \0 
    char withTerminator[] = {'h', 'i', '\0'};
    
    // a more idiomatic way to write it: its size 3, stores h, i, \0 in writable memory
    char idiomatic[] = "hi";
    
    // if no modification needed, read-only literal    
    char *strPointer = "Hi Better Way";

    printf("%d\n", myarray[4]);
    printf("%s\n", uglyWay);
    printf("%s\n", withTerminator);
    printf("%s\n", idiomatic);
    printf("%s\n", strPointer);
}
