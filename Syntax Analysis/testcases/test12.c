//ERROR FREE - This test case includes nested comments
#include<stdio.h>

int callingFunc(int a)
{
	return a;
}
int main()
{
	
	int a = 6;
	printf("Hello %d", callingFunc(a));
	return 0;
}
	