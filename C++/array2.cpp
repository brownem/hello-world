#include <stdio.h>
#define SIZE 5

int main()
{
	int ary[SIZE], max;
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("Input element No. %d\n", i + 1);
		scanf("%d", &ary[i]);
	}
	
	printf("The ary array has, \n");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d, ", ary[i]);
	}
	
	printf("\n");
	
	max = ary[0];
	
	for(int i = 1; i < SIZE; i++)
	{
		if(max < ary[i])
			max = ary[i];
	}
	
	printf("The highest value in ary is %d\n", max);
	
	return 0;
}
