#include<stdio.h>
main()
{
	int i,j,space,rows;
	printf("ENTER NUMBER OF ROWS :");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)                           // For outer loop we get no. of rows from user
	{
		for(space=1;space<=rows-i;space++)			// For space in inner loop
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)						// For * in inner loop
		{
			printf("*");
		}
		printf("\n");
	}	
}
