#include <stdio.h>

int main()
{
    int r,c,sum = 0; 
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&r,&c); 
    
    
    int a[r][c];
    printf("Enter the value of the array\n");
    for(int i=0; i<r; i++)    
    {
        for(int j=0; j<c; j++)
        {
        	printf("a[%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nOUTPUT \n");
    for(int i=0; i<r; i++)  
   {
        for(int j=0; j<c; j++)
        {
        	if(i==j)
        	{
        		printf("%d \t",a[i][j]);
			}
        	else
        	{
        		printf("  ");
			}
        }
        printf("\n");
    }
    
    printf("\ndiagonal Sum....\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
        	if(i==j)
        	{
        		sum = sum+ a[i][j];
			}
        }
    }
    printf("\nSum of all the elements in diagonal  %d\n",sum);
}
