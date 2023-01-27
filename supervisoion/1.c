#include<stdio.h>
main()
{
	FILE *fp;
	
	int a;
	char name[100];
	
    fp = fopen("hello.text","w");
    
    printf("Enter The Value Of A: ");
    scanf("%d",&a);
    
    fprintf(fp,"%d",a);
    
    printf("Your data successfully inserted");
    fclose(fp);
    
}
