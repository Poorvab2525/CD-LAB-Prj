//ERROR -ID undeclared in current scope
#include <stdio.h>

int main() {
    printf("%d\n", x);  // Error: 'x' undeclared in current scope

    int x = 10;  // Declaration of 'x' after its use

    return 0;
}
