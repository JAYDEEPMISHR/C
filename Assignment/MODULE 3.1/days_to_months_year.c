#include<stdio.h>
main()
{
	int days,month,year;

	printf("\n The value of days=");
	scanf("%d",&days);
			
	printf("\n **********************************************************************************\n");
	
	printf("\n Days to Months");
	
	month=(12*days)/360;
	printf("\n Months=%d",month);
	
	printf("\n **********************************************************************************\n");
	
	printf("\n Days to Year");
	
	year=days/360;
	printf("\n Year=%d",year);

}
