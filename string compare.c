#include<stdio.h>
main()
{
	char str1[20],str2[20],x;
	
	printf("ENTER STRING 1 :");
	scanf("%s",str1);
	
	printf("ENTER STRING 2 :");
	scanf("%s",str2);
	
	x=strcmp(str1,str2);
	
	if(x!=0)
	{
		printf("SRING IS NOT EQUAL");
	}
	else
	{
		printf("STRING IS EQUAL");
	}
}
