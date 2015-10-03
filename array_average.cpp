/*******************************************Averaging Array***********************************************
Michael Browne
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

void read_out(int ary[])
{
	printf("The ary array has, \n");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d, ", ary[i]);
	}
	printf("\n");
}

void average(int ary[])
{
	int sum=0;
	float mean;

	for(int i = 0; i < SIZE; i++)
	{
		sum = sum + ary[i];
	}

	mean = sum/5.0;
	
	printf("The average value in ary is %f\n", mean);
}


int main()
{
	int ary[SIZE];

	input(ary);
	read_out(ary);
	average(ary);

	return 0;
}


/********************************************************************************************************
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

The ary array has,
1, 2, 3, 4, 5,
The average value in ary is 3.000000
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

The ary array has,
2, 4, 6, 8, 10,
The average value in ary is 6.000000
Press any key to continue . . .
|End|

|Run3:|
Input element No. 1
23
Input element No. 2
45
Input element No. 3
65
Input element No. 4
78
Input element No. 5
2

______________________
----------------------

The ary array has,
23, 45, 65, 78, 2,
The average value in ary is 42.599998
Press any key to continue . . .
|End|
*********************************************************************************************************/