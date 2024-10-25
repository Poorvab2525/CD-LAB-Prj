#include <stdio.h>


static int count = 5; /* global variable */


/* function definition */
void func(int g)
{


    static int i = 5; /* local static variable */
    i++;
    g++;
    // printf("i is %d and count is %d\n", i, count);
}


int main()
{
    while (count--)
    {
        func(5);
    }


    return 0;
}
