/*************************************adjustable @grid*****************************************************
Michael Browne
3/21/2011
**********************************************************************************************************/

#include <stdio.h>

int main()
{
	int grid, a=1, b=1, c=1;

	printf("Please enter the grid size.\n");
	scanf("%d", &grid);

	{
		while( a<=grid )
			{
				a++;
				printf("@"); /* prints first line of the matrix to the user-defined size (grid), using only "@" */
			}
		printf("\n"); /* Moves onto the next part of program */
	}

	
	{
		while( b<=(grid-2) ) /* Defines the number of lines beteen the first and last lines of the matrix. */
		{
			b++;
			for( int k=1; k<=grid; k++ )
			{
				if ( k==1 || k==grid ) /* Prints "@" in the first and last columns of the matrix */
					printf("@");
				else
					printf(" "); /* Prints a blank space in every column but the first and last ones */
			}
			printf("\n"); /* Moves onto the next line, until the run where b=(grid-2), then it moves onto section */
		}
	}

	
	{
		while( c<=grid )
			{
				c++;
				printf("@"); /* Prints the last line of the matrix to the usr defined size, using only "@" */
			}
		printf("\n"); /* Moves onto termination of the program */
	}

return 0;
}

/*I would first just like to say that my initial solution was to use nested For-loops and was nearly identical to your own. I decided to modify my code to work with While-loops when I saw your solution.

|Run 1:|
Please enter the grid size.
4
@@@@
@  @
@  @
@@@@
Press any key to continue . . .
|End|

|Run 2:|
Please enter the grid size.
5
@@@@@
@   @
@   @
@   @
@@@@@
Press any key to continue . . .
|End|

|Run 3:|
Please enter the grid size.
6
@@@@@@
@    @
@    @
@    @
@    @
@@@@@@
Press any key to continue . . .
|End|
*/