#include<stdio.h>
main()
{
	int i,n;
	int n1=0,n2=1;
	int nextterm=n1+n2;                        // Initialize all term required for fibbonacci series
	printf("GIVE ONE NUMBER : ");
	scanf("%d",&n);
	
	printf("Fibbonacci Series: %d %d",n1,n2);  // Print first 2 terms
	
	for(i=3;i<=n;i++)  // Print next terms
	{
	printf(" %d",nextterm);
	
	n1=n2;
	n2=nextterm;
	nextterm=n1+n2;
	}
}
