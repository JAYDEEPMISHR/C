#include<stdio.h>
main()
{
	float km,yard,ans;

	printf("\n The value of km=");
	scanf("%f",&km);
		
	printf("\n **********************************************************************************\n");
	
	printf("\n Kilometer to Yard is");
	
	ans=km*1093.613298;
	printf("\n Area=%f",ans);
	
	printf("\n **********************************************************************************\n");
	
	printf("\n The value of yard=");
	scanf("%f",&yard);
	
	printf("\n Yard to Kilometer is");
	
	ans=yard/1093.613298;
	printf("\n Area=%f",ans);	
}
