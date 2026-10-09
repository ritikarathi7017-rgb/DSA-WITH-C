
#include <stdio.h>

int main() {
    int stack[5];
    int top = -1;

    // Push 10
    stack[++top] = 10;

    // Push 20
    stack[++top] = 20;

    // Push 30
    stack[++top] = 30;

    printf("Top element: %d\n", stack[top]);

    // Pop one element
    top--;

    printf("After pop: %d\n", stack[top]);

    return 0;
}