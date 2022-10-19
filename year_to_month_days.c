#include<stdio.h>
main()
{
	int days,month,year;

	printf("\n The value of year=");
	scanf("%d",&year);
			
	printf("\n **********************************************************************************\n");
	
	printf("\n Year to Months");
	
	month=(12*year);
	printf("\n Months=%d",month);
	
	printf("\n **********************************************************************************\n");
	
	printf("\n Year to Days");
	
	days=year*360;
	printf("\n Days=%d",days);

}
