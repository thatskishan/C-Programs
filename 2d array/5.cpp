#include <stdio.h>

int main()
{
    int r,c; 
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nRow Sum....\n");
    for(int i=0; i<r; i++)   
    {
        int sum=0;
        for(int j=0; j<c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("\nSum of all the values in row %d is %d\n",i+1,sum);
    }
    
}
