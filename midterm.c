#include<stdio.h>
void main()
{
	int i,j,k,l;
	for(i=0;i<4;i++)
	{
		printf("1");
		for(j=0;j<i;j++)
		{
			printf("2");
			for(k=0;k<j;k++)
			{
				printf("3");
				for(l=0;l<k;l++)
				{
					printf("4");
				}
			}
		}
	}
}
