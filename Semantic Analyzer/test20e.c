//ERROR- undeclare variable in while loop

#include <stdio.h>

int main() {
    int y = 10;
    
    while (x > 0) {  // Error: Variable 'x' is undeclared
        y--;
    }
    
    return 0;
}
