// ERROR - Type of paramaters does not match type of argument
//int and float mismatch
#include <stdio.h>

void multiply(int a, int b) {
    printf("Product: %d\n", a * b);
}

int main() {
    float x = 5.5, y = 3.2;
    multiply(x, y);  // Error: Parameter types (int, int) do not match argument types (float, float)
    return 0;
}
