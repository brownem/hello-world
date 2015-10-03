#include <stdio.h>

int main()
{
	int size;

	printf("Please enter the grid size.\n");
	scanf("%d", &size);

	for (int i = 1; i <= size; i++) /* start i at 1, if 'i' is less than or equal to 'size', then print '@' and add 1 to 'i'. Size=4, 4 '@' printed on line one*/
		printf("@");
	printf("\n"); /*ends first line*/

	for (int j = 1; j <= (size - 2); j++) /* start j at 1, so long as 'j' is less than or equal to (size-2), add 1 to 'j' and run the loop that number of times. Size=4, run for loop twice. The (size-2) makes it square by elimating the 2 from the total size of the grid, making room for the first and last lines and allowing for the other lines to be printed inbetween*/
	{
		for (int i = 1; i <= size; i++) /* start i at 1, so long as 'i' is less than or equal to 'size', add 1 to j and run the loop */
		{
			if (i == 1 || i == size) /* if 'i' equals 1, or if 'i' equals size, then print '@'. If not, then print a space. Prints a '@' in the first and last places on a line */
				printf("@");
			else
				printf(" ");
		}
		printf("\n");
	}

	for (int i = 1; i <= size; i++) /* prints the last line identical to the first, completeling the square/circle */
		printf("@");
	printf("\n");

	return 0;
}