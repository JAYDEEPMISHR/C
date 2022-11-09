#include<stdio.h>
main()
{
	int i,num,fact=1;
	printf("GIVE NUMBER:");
	scanf("%d",&num);
	

	for(i=1;i<=num;i++)
	fact=fact*i;            // factorial logic for any number
	{		
		printf("Factorial of %d number=\t%d",num,fact);
	}
}
