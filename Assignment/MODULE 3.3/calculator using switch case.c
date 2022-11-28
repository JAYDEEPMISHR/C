#include<stdio.h>
main()
{
	int n;
	int a,b,c;
	printf("======CALCULATOR======\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("======================\n");
	printf("\nEnter value of A= ");
	scanf("%d",&a);
	printf("\nEnter value of B= ");
	scanf("%d",&b);
	printf("\nGive your choice= ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
		c=a+b;
		printf("\nAddition of number is=%d",c);
		break;	
		
		case 2:
		c=a-b;
		printf("\nSubtraction of number is=%d",c);
		break;
		
		case 3:
		c=a*b;
		printf("\nMultiplication of number is=%d",c);
		break;
		
		case 4:
		c=a/b;
		printf("\nDivision of number is=%d",c);
		break;
		
		default:
			printf("Your choice is not in a list");
	}
}
