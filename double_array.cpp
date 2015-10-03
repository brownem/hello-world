/*******************************************Reversing Array***********************************************
Mike Browne
Hong-sheng Wu
CompSci 120-13
Lab7.2
*********************************************************************************************************/
#include <stdio.h>
#define SIZE 5

void input(int ary[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("Input element No. %d\n", i + 1);
		scanf("%d", &ary[i]);
	}

	printf("\n");
	printf("______________________\n");
	printf("----------------------\n");
	printf("\n");
}

void forward(int ary[])
{
	printf("The ary array forwards is: \n");
	
	for(int i=0; i < SIZE; i++)
	{
		printf("%d, ", ary[i]);
	}
	
	printf("\n");
}

void backward(int ary[])
{
printf("The ary array backwards is: \n");
	for(int i = SIZE-1; i >= 0; i--)
	{
		printf("%d, ", ary[i]);
	}
	
	printf("\n");
}

int main()
{
	int ary[SIZE];

	input(ary);
	forward(ary);
	backward(ary);
	
	return 0;
}

/*********************************************************************************************************
|Run 1:|
Input element No. 1
1
Input element No. 2
2
Input element No. 3
3
Input element No. 4
4
Input element No. 5
5

______________________
----------------------

The ary array forwards is:
1, 2, 3, 4, 5,
The ary array backwards is:
5, 4, 3, 2, 1,
Press any key to continue . . .
|End|

|Run 2:|
Input element No. 1
2
Input element No. 2
4
Input element No. 3
6
Input element No. 4
8
Input element No. 5
10

______________________
----------------------

The ary array forwards is:
2, 4, 6, 8, 10,
The ary array backwards is:
10, 8, 6, 4, 2,
Press any key to continue . . .
|End|

|Run 3:|
Input element No. 1
32
Input element No. 2
56
Input element No. 3
69
Input element No. 4
87
Input element No. 5
34

______________________
----------------------

The ary array forwards is:
32, 56, 69, 87, 34,
The ary array backwards is:
34, 87, 69, 56, 32,
Press any key to continue . . .
|End|
*********************************************************************************************************/