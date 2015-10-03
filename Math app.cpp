/**************************************Number Calc********************************************************
Takes two numbers and calculates their sum, average, product and mod
Michael Browne
*********************************************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	char answer = 'y';
	while (answer == 'y' || answer == 'Y')
	{
	printf( "Enter two numbers to calculate their sum, average, product and mod\n" );

	printf( "Please enter the first number\n" );
	scanf( "%d", &n1 ); /* looks for first number */

	printf( "Please enter the second number\n" );
	scanf( "%d", &n2 ); /* looks ffor second number */

	/*
	sum = n1 + n2
	mean = (n1 + n2)/2
	prod = n1 * n2
	mod = remainder of n1 / n2
	*/

	printf( "The sum is %d\n", n1 + n2 );

	printf( "The average is %d\n", ((n1 + n2)/2) );
	
	printf( "The product is %d\n", n1 * n2 );

	printf("The mod is %d\n", n1 % n2);
	
	
	cout<<"Try again (Y/N)?\n"<<endl;
	cin >> answer;
	}
	
	return 0;
}

/***************************Output:***********************************************************************

Enter two numbers to calculate their sum, average, product and mod
Please enter the first number
10
Please enter the second number
4
The sum is 14
The average is 7
The product is 40
The mod is 2
Try again (Y/N)?

y
Enter two numbers to calculate their sum, average, product and mod
Please enter the first number
15
Please enter the second number
6
The sum is 21
The average is 10
The product is 90
The mod is 3
Try again (Y/N)?

n
Press any key to continue . . .

*********************************************************************************************************/