#include<stdio.h>
main()
{
	int i,j,rows;
	
	printf("ENTER NO OF ROWS : ");
	scanf("%d",&rows);
	
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
