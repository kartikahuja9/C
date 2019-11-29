#include<stdio.h>
void main()
{
	int i=1,sum=1;
	do
	{
		sum=sum*i;
		i++;		
	}while(i<=10);
	printf("factorial 10 = %d",sum);
}
