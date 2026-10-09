
#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    *ptr = 50;

    printf("Number = %d\n", number);

    return 0;
}