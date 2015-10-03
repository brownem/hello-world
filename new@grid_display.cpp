#include <stdio.h>

int input()
{
	int g;
	printf("Please enter the grid size.\n");
	scanf("%d", &g);
	return (g);
}

void
display_line(int grid)
{
	int a=1;
	while( a<=grid )
			{
				a++;
				printf("@"); /* prints first line of the matrix to the user-defined size (grid), using only "@" */
			}
		printf("\n"); /* Moves onto the next part of program */
}

void
display_body(int grid)
{
	int b=1;
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


int main ()
{

	int g = input();
	
	display_line(g);

	display_body(g);

	display_line(g);

	display_line(g);

	display_body(g);
	
	display_line(g);

	return 0;
}

/**********************************************************************************************************
|Run 1:|
Please enter the grid size.
4
@@@@
@  @
@  @
@@@@
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
@@@@@@
@    @
@    @
@    @
@    @
@@@@@@
Press any key to continue . . .
|End|
**********************************************************************************************************/