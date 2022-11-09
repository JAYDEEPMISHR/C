#include<stdio.h>
main()
{
	int n,sum=0,i=0;
	
	printf("Give Number=");
	scanf("%d",&n);
	
	lable:
		i++;
		sum+=i; // Sum=sum+i;
		
		if(i<n)
		goto lable;
		printf("Sum Of %d is= %d",n,sum);
}
