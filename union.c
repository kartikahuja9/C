#include<stdio.h>
union job
{
	float salary;
	int workerNo;
}j;
int main()
{
	union job j1, j2, *j3;
	j.salary = 12.3;
	j.workerNo = 100;
	printf("salary = %.1f\n", j.salary);
	printf("Number of workers = %d", j.workerNo);
	return 0;
}
