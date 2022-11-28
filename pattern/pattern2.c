#include<stdio.h>
main()
{ 
int i,j,rows,k;

printf("ENTER NUMBER OF ROWS : ");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
	for(j=1;j<=(rows-i);j++)
	{
		printf("*");	
	}
	printf("\n");
}
}
