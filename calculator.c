#include<stdio.h>
main()
{
	int A,B,C;

	printf("\n The value of A=");
	scanf("%d",&A);
	
	printf("\n The value of B=");
	scanf("%d",&B);
	
	printf("\n **********************************************************************************");
	
	printf("\n Mathematical Operations of Given number are=");
	
	C=A+B;
	printf("\n Addition of A & B is %d",C);
	
	C=A-B;
	printf("\n Subtraction of A & B is %d",C);
	
	C=A*B;
	printf("\n Multiplication of A & B is %d",C);
	
	C=A/B;
	printf("\n Division of A & B is %d",C);
	
	C=A%B;
	printf("\n Modulo of A & B is %d",C);	
}
