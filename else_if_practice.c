#include<stdio.h>
main()
{
	float marks;
	printf("Enter Marks:");
	scanf("%f",&marks);
	
	if(marks>100)
	{
		printf("Marks Value Does not exceed 100");
	}
	else if(marks>80 && marks<100) // Marks between 80 to 100
	{
		printf("Distinction");
	}
	else if(marks>70 && marks<80) // Marks between 70 to 80
	{
		printf("First Class");
	}
	else if(marks>60 && marks<70) // Marks between 60 to 70
	{
		printf("Second Class");
	} 
	else if(marks>35 && marks<60) // Marks between 35 to 60
	{
		printf("Just Pass");
	}
	
	else if(marks<35) // Marks less than 35
	{
		printf("Fail");
	}
	
	else
	{
		printf("Wrong Marks");
	}
}
