#include<stdio.h>
main()
{

int i,j,row;
printf("Enter no. of rows=");
scanf("%d",&row);

for(i=row;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
}
