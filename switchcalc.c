#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char c;
	printf("\n Enter a character");
	scanf("%c", &c);
	int a,b;
	printf("\n Enter 2 number:");
	scanf("%d %d" , &a,&b);
	int sum;
	switch (c)
	{
		case '+' :  sum = a + b;
					break;
		case '-':  sum = a -b;
					break;
		case '*' :  sum = a * b;
					break;
		case '/' :  sum = a / b;
					break;
		default: printf("Invalid");
					break;
	}
	printf("\n %d " , sum);
}
