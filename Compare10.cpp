/*******************************************Comparing Array***********************************************
Michael Browne
*********************************************************************************************************/
#include <stdio.h>
#define SIZE 6

void input(double ary[])
{
	for (int i=0; i<SIZE; i++)
	{
		printf("Input element No. %d\n", i + 1);
		scanf("%lf", &ary[i]);
	}

	printf("\n");
	printf("______________________\n");
	printf("----------------------\n");
	printf("\n");
}

void compare(double ary[])
{
	printf("Elements in the ary array compared to 10 are:\n\n");
	
	for(int i=0; i<SIZE; i++)
	{
		if(ary[i]<=10)
		{
			if(ary[i]<10)
			{
				printf("Lower\n\n", &ary[i]);
			}

			else
			{
				printf("Equal\n\n", &ary[i]);
			}
		}
		
		else
		{
			printf("Higher\n\n", &ary[i]);
		}
	}
	
}

int main()
{
	double ary[SIZE];

	input(ary);
	compare(ary);

	return 0;
}

/*********************************************************************************************************
|Run 1:|
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
Input element No. 6
12

______________________
----------------------

Elements in the ary array compared to 10 are:

Lower

Lower

Lower

Lower

Equal

Higher

Press any key to continue . . .
|End|

|Run 2:|
Input element No. 1
4
Input element No. 2
6
Input element No. 3
8
Input element No. 4
10
Input element No. 5
12
Input element No. 6
14

______________________
----------------------

Elements in the ary array compared to 10 are:

Lower

Lower

Lower

Equal

Higher

Higher

Press any key to continue . . .
|End|

|Run 3:|
Input element No. 1
32
Input element No. 2
10
Input element No. 3
8
Input element No. 4
10
Input element No. 5
16
Input element No. 6
9

______________________
----------------------

Elements in the ary array compared to 10 are:

Higher

Equal

Lower

Equal

Higher

Lower

Press any key to continue . . .
|End|
*********************************************************************************************************/