#include <stdio.h> 

 
main() 
{ 
	int sum; 
	int a[5]={50,55,65,75,90}; 
	int b[5]={33,54,63,85,95}; 
	for (int i=0; i<5 ;i++) 
	{ 
		sum+=a[i]+b[i]; 
	} 
	
	printf("Sum of 1D array is C[%d]", sum);
} 
