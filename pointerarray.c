#include<stdio.h>


int main()
{
	int *ptr;
	int arr[15],i,n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	ptr=arr;
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr=arr;
	printf("Elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr);
		*ptr++;
	}
/*	printf("\nAfter manipulation: ");
	ptr--;
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr);
		ptr--;
	}*/
}
