#include<stdio.h>

main()
{
 	int n1, n2, n3, i, j;
 	printf("\n Enter the number of elements for  First Array  :  ");
 	scanf("%d", &n1); 
 	
    int a[n1];      
 	printf("\nEnter the elements for First Array :  \n");
 	
 	for(i = 0; i < n1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	
  	printf("\n Enter the number of elements for  Second Array  :  ");
  	scanf("%d", &n2);    
    int b[n2];       
 	printf("\nEnter the elements for Second Array  :  \n");
 	
 	for(i = 0; i < n2; i++)
  	{
      	scanf("%d", &b[i]);
  	}
	n3 = n1 + n2;    
	
    int c[n3];       
    
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", n3); 
 	
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
  	
}



