
#include <stdio.h>

int main() {
    int marks[5] = {70, 80, 90, 65, 85};
    int i;

    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}