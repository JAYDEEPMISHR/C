#include<stdio.h>
int swap(int* , int*);  // Prototype of the function
main()
{
	int a=30; //Actual parameter
	int b=50;
	
	printf("\nBefore Swapping a=%d b=%d",a,b);
	swap(&a,&b);
}

int swap(int *a, int *b) // Formal parameter
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("\n After swapping a=%d b=%d",*a,*b);
}
	
