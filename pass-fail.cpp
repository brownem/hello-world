/*********************************Example 2.3 pt.2***********************************
Mike Browne
Hong-sheng Wu
CompSci 120-11
************************************************************************************/
#include <stdio.h>

int main()
{
	/* initializing variables in declaration */
	int passes = 0, failures = 0, student = 1, result;

	/* process 10 students; counter-controlled loop */
	while ( student <=11 ) {
		printf("Enter result (1=pass, 2=fail)\n");
		scanf("%d", &result);

		if (result == 1 )		/*if/else nested in while loop*/
			passes = passes + 1;
		else
			failures = failures + 1;

		student = student + 1;
	}

	printf( "Passed %d\n", passes);
	printf( "Failed %d\n", failures);

	if ( passes > failures )
		printf("Raise tuition\n");
			
		return 0; /* successful termination*/
}

/**********************************Output****************************************
Enter result (1=pass, 2=fail)
1
Enter result (1=pass, 2=fail)
1
Enter result (1=pass, 2=fail)
1
Enter result (1=pass, 2=fail)
1
Enter result (1=pass, 2=fail)
1
Enter result (1=pass, 2=fail)
1
Enter result (1=pass, 2=fail)
2
Enter result (1=pass, 2=fail)
2
Enter result (1=pass, 2=fail)
2
Enter result (1=pass, 2=fail)
2
Enter result (1=pass, 2=fail)
2
Passed 6
Failed 5
Raise tuition
Press any key to continue . . .


********************************************************************************/