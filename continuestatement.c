#include<stdio.h>
main()
{
	int i;
	for(i=0;i<11;i++)
	{
		if((i==4) || (i==9))
		continue;
		printf("\nVALUE OF i=%d",i);
	}
}

// Continue statement skip the current iteration and continue with next iteration
