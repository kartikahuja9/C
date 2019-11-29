//Program to see how pointer works and how a function is made
#include <stdio.h>
void decrement(int  *var)
{
    *var = *var-1;
}
int main()
{
     int num;
     printf("Enter a number.");
	scanf("%d",&num);
     decrement(&num);
     printf("Value of num is: %d", num);
   return 0;
}
