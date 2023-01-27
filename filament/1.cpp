#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[100];  
    int  i,j,count=0,n;
 
    printf("Enter the name here : ");
    gets(a);
     
    n = strlen(a);
	printf("\nfrequency count character in string:\n\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(a[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(a[i]==a[j])
    	    {
                 count++;
                 a[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",a[i],count);
 
       }
	   
 	} 

}
