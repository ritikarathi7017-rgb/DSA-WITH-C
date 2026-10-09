
#include <stdio.h>

int main() {
    char name[] = "CAT";
    int i;

    for (i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}