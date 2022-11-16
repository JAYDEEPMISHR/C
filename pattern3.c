#include<stdio.h>
main()
{
	int i,j,rows;
	
	printf("ENTER NO OF ROWS : ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*",j);
		}
		printf("\n");
	}
}
