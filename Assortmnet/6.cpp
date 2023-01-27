#include<stdio.h>
main()
{
	int r,c,i,j;
	
	printf("Enter the number of row an column : ");
	scanf("%d %d", &r ,&c);
	
	int a[r][c];
	
	printf("\n Enter the values for first matrix\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[i][j];
	printf("\n Enter the values for secound matrix\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int sum[i][j];
	for (i = 0; i < r; ++i)
  	{
  		for (j = 0; j < c; ++j)
		{
      		sum[i][j] = a[i][j] + b[i][j];
    	}
	}
	
	printf("\nSum of two matrices: \n");
  	for (i = 0; i < r; ++i)
  	{
  		for (j = 0; j < c; ++j) 
		{
      		printf("%d   ", sum[i][j]);
      		
      		if (j == c - 1)
			   	{
        			printf("\n\n");
      			}
    	}
  	}
	
	

}
