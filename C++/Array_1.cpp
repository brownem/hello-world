#include <stdio.h>

void swap(int a, int b);

int main()
{
	int x = 5, y = 7;
	
	printf("Before swap, x is %d and y is %d\n", x, y);
	
	swap(x, y);
	
	printf("After swap, x is %d and y is %d\n", x, y);
}

void swap (int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Inside swap, a is %d and b is %d\n", a, b);
}
