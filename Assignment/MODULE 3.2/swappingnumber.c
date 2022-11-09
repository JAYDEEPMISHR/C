#include<stdio.h>
main()
{
	int a,b;
	
	printf("\n Enter a value of a:");
	scanf("%d",&a);
	
	printf("\n Enter a value of b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After swapping value of a :%d",a);
	printf("\n After swapping value of b :%d",b);	
	
}
