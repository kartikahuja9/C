#include<stdio.h>
#include<conio.h>
void swap(int * p1, int * p2);
int main()
{
    int p1, p2;
    printf("Enter two numbers: ");
    scanf("%d%d", &p1, &p2);
    printf("Before swapping main ");
    printf("Value of Number 1 = %d \n", p1);
    printf("Value of Number 2 = %d \n", p2);
     swap(&p1, &p2);
    return 0;
}
void swap(int * p1, int * p2)
{
    int temp;
    temp = *p1;
    *p1= *p2;
    *p2= temp;
    printf("After swapping in swap function ");
    printf("Value of Number 1 = %d \n", *p1);
    printf("Value of Number 2 = %d \n", *p2);
}
