#include<stdio.h>
void main()
{
	int mark[2];
	printf("Enter two numbers.");
	int i = 0;
		for ( i = 0; i<2; i++)
		{
			scanf("%d", &mark[i]);
		}
	int sum = 0	;
		for ( i = 0; i<2; i++)
		{
			sum = sum + mark[i];
		}
	printf("The sum is: %d", sum);
}
