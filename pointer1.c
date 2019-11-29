#include<stdio.h>
void main()
{
	int*pc,c,d;//initialising *pc and c
	c=5;
	d=-15;
	pc=&c;
	printf("%d \n",*pc);
	pc=&d;
	printf("%d",*pc);
}
