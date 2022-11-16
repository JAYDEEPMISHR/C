#include<stdio.h>
main()
{
	int i,j,rows;
	
	printf("ENTER NO OF ROWS : ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
