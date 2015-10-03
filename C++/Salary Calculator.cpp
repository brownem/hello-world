/**************************Salary Calculator*****************************
Mike Browne
Hong-sheng Wu
CompSci 120-11
************************************************************************/
#include <stdio.h>

int main()
{
	int x;
	
	printf("Please input the number of hours worked by the employee\n");
	scanf("%d", &x);
		
			while (x <= 0) {
				printf("%d is not a valid time\n", x), scanf("%d", &x);
			}

			if (x <= 20)
				x *= 6, printf ("Please pay your employee %d\n", x);
					
			else if (x > 20)
				x *= 8.5, printf ("Please pay your employee %d\n", x);		
			
return 0;
}
/****************************Output***********************************
||Round 1:
Please input the number of hours worked by the employee
-3
-3 is not a valid time
0
0 is not a valid time
10
Please pay your employee 60
Press any key to continue . . .

||Round 2:
Please input the number of hours worked by the employee
-6
-6 is not a valid time
0
0 is not a valid time
24
Please pay your employee 204
Press any key to continue . . .

*******************************************************************/