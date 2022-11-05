#include<stdio.h>
main()
{
	int i;
	printf("Give one value: ");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("Given number is Even");
	}
	else
	{
		printf("Given number is odd");
	}
}
