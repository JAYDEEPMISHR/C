#include<stdio.h>
main()
{
	char string1[20]="MY NAME IS JAYDEEP";
	char string2[20]="";
	
	printf("BEFORE COPING......");
	printf("\nSTRING 1=%s",string1);
	printf("\nSTRING 2=%s",string2);
	
	strcpy(string2,string1);
	
	printf("\n\n\nAFTER COPING");
	printf("\nSTRING1=%s",string1);
	printf("\nSTRING2=%s",string2);
}
