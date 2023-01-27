#include<stdio.h>
#include<string.h>

main()
{
	FILE *fp;
	
	int id,maths,science,socialScience,english,gujrati,total;
	char name[100],school[100];
	
	
	fp = fopen("Result.txt","a");
	
	if(fp == NULL)
	{
		printf("Unable to open file!!!!\n");
	}
	
	printf("Enter Your Name: ");
	gets(name);
	printf("Enter Your School Name: ");
	gets(school);
	printf("Enter your ID No: ");
	scanf("%d",&id);
	printf("Enter your Gujrati marks: ");
	scanf("%d",&gujrati);
	printf("Enter your English marks: ");
	scanf("%d",&english);
	printf("Enter your Science marks: ");
	scanf("%d",&science);
	printf("Enter your Social Science marks: ");
	scanf("%d",&socialScience);
	printf("Enter your Maths marks: ");
	scanf("%d",&maths);
	
	fprintf(fp,"\t\tMarksheet\n\n");
	fprintf(fp,"Student Name\t: %s\n",name);
	fprintf(fp,"School Name\t: %s\n",school);
	fprintf(fp,"Your ID No\t: %d\n",id);
	fprintf(fp,"SUBJECT\t Total Marks\t Obtained Marks\n");
	fprintf(fp,"Gujrati\t100\t%d\n",gujrati);
	fprintf(fp,"English\t100\t%d\n",english);
	fprintf(fp,"Science\t100\t%d\n",science);
	fprintf(fp,"History\t100\t%d\n",socialScience);
	fprintf(fp,"Maths\t100\t%d\n",maths);
	fprintf(fp,"\t500\t%d\n",gujrati+english+science+socialScience+maths);
	
//	per = total/5;
	fprintf(fp,"Percentage = %d",gujrati+english+science+socialScience+maths/5);
	
	
	printf("\n Your data Inserted successfully!!!");
	fclose(fp);
}
