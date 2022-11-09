#include<stdio.h>
void add(); // Function declaration
main()
{
	add();
}

void add()// Function defination
{
	int a,b,c;
	
	printf("ENTER a= ");
	scanf("%d",&a);
	
	printf("ENTER b= ");
	scanf("%d",&b);
	
	c=a+b;
	printf("SUM OF NUMBER c=%d",c);
}

