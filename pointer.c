
#include <stdio.h>

int main() {
    int age = 21;

    int *ptr = &age;

    printf("Age = %d\n", age);
    printf("Address = %p\n", (void *)ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}