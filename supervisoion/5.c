#include<stdio.h>
main()
{
	FILE *fp;
	FILE *fp2;
	
	int a;
	
	fp=fopen("kishan.txt","r");
	fp=fopen("copy2.txt","w");
	
	fscanf(fp,"%d",&a);
	printf("Data from file : %d",a);
	
	fprintf(fp2,"%d",a);
	fclose(fp);
	fclose(fp2);
}
