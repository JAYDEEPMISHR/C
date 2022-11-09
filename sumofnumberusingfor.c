#include<stdio.h>
main()
{
	int n,sum=0,i=1;
	printf("Give Number= ");
	scanf("%d",&n);    // Get input from user
	
	
	for(i=1;i<=n;i++) 
	{
		sum=sum+i;
	}
	printf("Sum of %d=%d",n,sum);
}
