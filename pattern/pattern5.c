#include<stdio.h>
main()
{
	int i,j,row;
	printf("ENTER NUMBER OF ROWS :");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=i;j<row;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	for(i=1;i<=row-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
