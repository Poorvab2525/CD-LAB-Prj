#include<stdio.h>
void foo(int a, int b) {}
int main() {
    foo(1);  // Error: Too few arguments (expected 2)
    return 0;
}
