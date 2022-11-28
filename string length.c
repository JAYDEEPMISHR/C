#include<stdio.h>
main()
{
	char name[50];
	int length;
	
	printf("ENTER STRING:");
	gets(name);
	
	length=strlen(name);
	
	printf("LENGTH OF STRING IS=%d",length);
}
