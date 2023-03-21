#include<stdio.h>
main()
{
  int rows,i,k;

  printf("Enter number of rows: ");
  scanf("%d", &rows);
  
    for(k=1;k<=rows-1; k++)
  {
    for (i=1;i<=k;i++)
    {
      printf(" ");
	}
    for (i=1;i<=2*(rows-k)-1;i++)
    {
      printf("*");
	}
    printf("\n");
  }

  for (k=1; k<=rows;k++)
  {
    for(i=1;i<=rows-k;i++)
    {
      printf(" ");
	}

    for(i=1;i<=2*k-1;i++)
    {
      printf("*");
	}
    printf("\n");
  }
}
