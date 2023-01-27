#include<stdio.h>

main()
{
	int r,c,i,j,sum,average = 0;
	
	printf("Enter the number of row : ");
	scanf("%d",&r);
	
	printf("Enter the number of column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the value of a[%d][%d] ",i+1,j+1);
			scanf("%d",&a[i][j]);
			
			sum = sum + a[i][j];
			average++;
		}
	}
	
	printf("\nOutput\n");
	
	printf("Average of array is : %d ",sum/average);
}
