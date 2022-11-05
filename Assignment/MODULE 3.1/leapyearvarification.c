#include<stdio.h>
main()
{
	int year;
	printf("Enter year=%d",year);
	scanf("%d",&year);
	
	if(year%4==0) // If year is divisible by 4 then it is leap year.
	{
		printf("%d is leap year",year);
	}
	
	else if(year%100==0) // It is not leap year if it is divisible by 100 but not divisible by 400
	{
		printf("%d is not leap year",year);
	}
	else if(year%4==0) // Given year is leap year if it is divisible by 4 but not divisible by 100.
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
}
