#include<stdio.h>
void add();                                                             // Function declaration
void sub();
void mul();
void div();
main()
{
	int a,b,c;
	printf("ENTER a= ");
	scanf("%d",&a);
	
	printf("ENTER b= ");
	scanf("%d",&b);
	
	add(a,b,c);
	sub(a,b,c);
	mul(a,b,c);
	div(a,b,c);
}
void add(a,b,c)                                                           // Function defination(ADDITION)
{	
	c=a+b;
	printf("\nSUM OF NUMBER c= %d",c);
}
void sub(a,b,c)                                                           // Function defination(SUBTRACTION)
{	
	c=a-b;
	printf("\nSUBTRACTION OF NUMBER c=%d",c);
}
void mul(a,b,c)                                                           // Function defination(MULTIPLICATION)
{	
	c=a*b;
	printf("\nMULTIPLICATION OF NUMBER c=%d",c);
}
void div(a,b,c)                                                           // Function defination(DIVISION)
{	
	c=a/b;
	printf("\nDIVISION OF NUMBER c=%d",c);
}
