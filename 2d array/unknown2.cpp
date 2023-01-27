#include<stdio.h>
 
int main()
{
    int i, j,r,c,Sum;
    
    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);
    
    printf("Please Enter the value of Row and Column Elements \n");
    
    int a[r][c];
    
    for(r = 0; r< i; r++)
    {
        for(c = 0; c< j; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    
    for(r = 0; r< i; r++)
    {
        Sum = 0;
        for(c= 0; c< j; c++)
        {
            Sum = Sum + a[r][c];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
    }

}
