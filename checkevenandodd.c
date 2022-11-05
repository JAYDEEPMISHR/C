#include<stdio.h>
main()
{
	int i,n;
	
	printf("ENTER LAST NUMBERS :");
	scanf("%d",&n);
	
	printf("EVEN NUMBERS");
	for (i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			// EVEN 
			printf("\n %d",i);
		}
	}
	printf("\n ODD NUMBERS");
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			// EVEN 
			printf("\n %d",i);
		}
	}
}
