#include<stdio.h>
main()
{
	int i,j,rows;
	printf("ENTER NUMBERS OF ROWS:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)					// For simple pyramid
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)					// For inverted pyramid
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
