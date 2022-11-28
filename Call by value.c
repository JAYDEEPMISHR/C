#include<stdio.h>
int swap(int, int); // Prototype to the function
main()
{
	int a=10;     // Actual paramenter
	int b=20;
	
	printf("\nBefore Swapping a=%d b=%d",a,b);
	swap(a,b);
}

int swap(int a,int b)  // Formal parameters
{
	int temp;
	temp =a;
	a=b;
	b=temp;
	
	printf("\nAfter Swapping a=%d b=%d",a,b);
}
