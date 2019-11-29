#include<stdio.h>
#include<string.h>
struct employee
{
	char name[25];
	int age;
	char gender;
	float rating;
} e1,e2;
int main ()
{

	
	/*
	e1 and e2 are variables of employee type and age is a member of employee
	*/
	e1.age=18;
	strcpy(e1.name,"viraaj");//using string function to add name
	e1.gender= 'M';
	e1.rating= 4.5;
	//displaying the stored values
	printf("Name of employee 1: %s\n", e1.name);
	printf("Age of employee 1: %d\n", e1.age);
	printf("Gender: %c\n", e1.gender);
	printf("Rating: %f\n",e1.rating);
	return 0;
}
