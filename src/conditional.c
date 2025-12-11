#include <stdio.h>

int main() {
    
    int temp;
    printf("What temperature (celsius) is it?\n");
    scanf("%d", &temp);

    if (temp >= 28) {
        printf("It's %d degrees, hot\n", temp);
    } else if (temp >= 18 && temp <  28) {
        printf("It's %d degrees, mild\n", temp);
    } else {
        printf("It's cold, %d degrees\n", temp);
    }

    return 0;
}
