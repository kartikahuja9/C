#include<stdio.h>
void main()
{
	int*pc,c;//initialising *pc and c
	c=5;
	pc=&c;//assigning the address to c
	printf("%d",*pc);
}
