#include<stdio.h>
main()
{
	float c,f,ans;

	printf("\n The value of c=");
	scanf("%f",&c);
		
	printf("\n **********************************************************************************");
	
	printf("\n Celcius to Ferenheit is");
	
	ans=(c*1.8)+32;
	printf("\n Area=%f",ans);
	
	printf("\n **********************************************************************************");
	
	printf("\n The value of f=");
	scanf("%f",&f);
	
	printf("\n Ferenheit to Celcius is");
	
	ans=(f-32)/1.8;
	printf("\n Area=%f",ans);	
}
