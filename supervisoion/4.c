#include<stdio.h>
main()
{
	FILE *fp;
	
	int a;
	char name[100];
	
    fp = fopen("append.text","a");
    
    if(fp==NULL)
    {
    	printf("Enable to open file.....");
	}
    
    printf("Enter Your Name : ");
    gets(name);
    
    printf("Enter Your Id: ");
    scanf("%d",&a);

    fprintf(fp,"Your Id: %d\n",a);
    fprintf(fp,"Your Name: %s\n",name);
    
    printf("Your data successfully inserted");
    fclose(fp);
    
}
