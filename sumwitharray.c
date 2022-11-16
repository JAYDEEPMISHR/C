#include<stdio.h>
main()
{
	int array[]={10,12,13,14,15};
	int i;
	int sum=0;
	
	for(i=0;i<5;i++)
	{
	    printf("%d=%d\n",i+1,array[i]); 
	    sum+=array[i];
	}
	printf("SUM=%d",sum);
}

