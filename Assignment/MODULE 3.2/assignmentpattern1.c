#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			printf("1");
		}
		for(j=2;j<2*i;j++)
		{
			printf("0");
		}
		printf("\n");
	}
}
