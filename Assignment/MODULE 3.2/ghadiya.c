#include<stdio.h>
main()
{
	int num,ans,i;
	printf("Enter Number= ");
	scanf("%d",&num);    // Get input from user
	
	
	for(i=1;i<=10;i++) 
	{
		ans=num*i;
		printf("\n \t %d * %d =    %d",num,i,ans);
	}	
}
