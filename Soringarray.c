#include<stdio.h>
main()
{
	int i,j,temp;
	int a[10]={12,3,4,7,19,1,13,8,24,54};
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	printf("Sorting decremet list: \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
