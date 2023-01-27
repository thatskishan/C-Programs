#include<stdio.h>
main()
{
	FILE *fp;
	
	int a;
	
    fp = fopen("hello.text","r");
    
    fscanf(fp,"%d",&a);
    printf("Value of a is: %d",a);
    
    fclose(fp);
    
}
