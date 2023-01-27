#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp,*fp2;
	
	char name[100];
	fp = fopen("file1.txt","r");
	fp2 = fopen("new.txt","a");
	
	if(fp == NULL)
	{
		printf("Unable to open file!!!!\n");
	}
	
	fgets(name,50,fp);
	fprintf(fp2,"Name is : %s",name);
	
	printf("\n Your data Inserted successfully!!!");
	fclose(fp);
	fclose(fp2);
	
	
}
