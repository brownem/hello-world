/****************** Number evaluator ************************************************
Determines which of two numbers is larger or smaller, or if they are equal in size 
Michael Browne
***********************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

	int n1, n2;
	char answer = 'y';
	while(answer == 'Y' || answer == 'y')
	{
	printf( "Enter two numbers to determine which is larger or if they are equal in size\n" );
	
	printf( "Please enter the first number\n" );
	scanf( "%d", &n1 ); /* looks for first number */

	printf( "Please enter the second number\n" );
	scanf( "%d", &n2 ); /* looks for user input of two numbers */
	
	if ( n1 == n2 )
		printf( "These two number are equal to one another\n", n1, n2 );
	
	if ( n1 < n2 )
		printf( "%d is larger than %d\n", n2, n1 );
	
	if ( n1 > n2 )
		printf( "%d is larger than %d\n", n1, n2 );
	
		cout<<"Try again (Y/N)?\n"<<endl;
		cin >> answer;
	}
	return 0;
}

/****************** Output: ******************************************************

Enter two numbers to determine which is larger or if they are equal in size
Please enter the first number
6
Please enter the second number
5
6 is larger than 5
Try again (Y/N)?

y
Enter two numbers to determine which is larger or if they are equal in size
Please enter the first number
7
Please enter the second number
8
8 is larger than 7
Try again (Y/N)?

n
Press any key to continue . . .

********************************************************************************/