
#include <stdio.h>

int main() {
    int queue[5];
    int front = 0;
    int rear = -1;

    // Enqueue
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("First element: %d\n", queue[front]);

    // Dequeue
    front++;

    printf("After dequeue: %d\n", queue[front]);

    return 0;
}