#include<stdio.h>
main()
{
	int a[100],i,n,min,max;
	printf("ENTER SIZE OF AN ARRAY :");
	scanf("%d",&n);
	
	printf("ENTER AN ELEMENTS=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	
	for(i=1;i<a[i];i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("MINIMUM NUMBER IS:%d\n",min);
	printf("MAXIMUM NUMBER IS:%d\n",max);
}
