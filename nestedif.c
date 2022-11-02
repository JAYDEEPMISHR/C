#include<stdio.h>
main()
{
	int age;
	printf("Give your Age:");
	scanf("%d",&age);
	
	if(age>14)
	{
		if(age>=18)
		{
			printf("ADULT");
		}
		else
		{
			printf("TEENAGER");
		}
	}
	else
	{
		if(age<5)
		{
			printf("CHILD");
		}
		else
		{
			printf("SOMETHING IS WRONG");
		}
	}
}
