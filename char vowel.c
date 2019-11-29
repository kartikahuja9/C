#include<stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	printf("%c is a vowel",a);
	else
	printf("%c is a consonant",a);
}
