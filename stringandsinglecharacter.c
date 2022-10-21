#include<stdio.h>
main()
{
	char a; // for single character
	char name[10];  // for string 
	
	printf("SAY YES OR NO : ");
	scanf("%c",&a);
	fflush(stdin);
	
	printf("ENTER NAME : ");
	gets(name);
	
	printf("\nSINGEL CHARACTER=%c",a);
	printf("\nNAME=%s",name);
}
