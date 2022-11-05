#include<stdio.h>
main()
{
	int p,r,n,SI;

	printf("\n The value of p=");
	scanf("%d",&p);
	
	printf("\n The value of r=");
	scanf("%d",&r);
	
	printf("\n The value of n=");
	scanf("%d",&n);
		
	printf("\n **********************************************************************************");
	
	printf("\n Simple Interest is");
	
	SI= (p*r*n)/100;
	printf("\n SI=%d",SI);	
}
