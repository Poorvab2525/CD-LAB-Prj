//ERROR - number of paramenters donot match argument
#include <stdio.h>

void add(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    int x = 10;
    add(x);  // Error: The function expects two arguments, but only one is provided
    return 0;
}
