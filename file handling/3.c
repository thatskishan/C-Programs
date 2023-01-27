#include<stdio.h>


struct student{
	int roll;
	char name[100];
	int maths;
	int chem;
	int phy;
	float percentage;
};
main()
{
	
	FILE *fp;
	
	fp = fopen("Marksheet.txt","a");
	
	if(fp == NULL)
	{
		printf("Unable to open file!!!!\n");
	}
	
	struct student s[5];
	
	int i;
	
	for(i=0;i<5;i++)
	{
		system("cls");
		printf("Enter Details for Student(%d/%d)\n",i+1,5);
		printf("Enter Roll Number : ");
		scanf("%d",&s[i].roll);
		printf("Enter Name : ");
		scanf("%s",&s[i].name);
		printf("Enter Maths Marks : ");
		scanf("%d",&s[i].maths);
		printf("Enter Chemistry Marks : ");
		scanf("%d",&s[i].chem);
		printf("Enter Physics Marks : ");
		scanf("%d",&s[i].phy);
	}
	
	for(i=0;i<5;i++)
	{
		
		s[i].percentage = (s[i].maths + s[i].chem + s[i].phy)/3;
		
	}
	
	for(i=0;i<5;i++)
	{
		fprintf(fp,"Student %d percentage = %.2f\n",i+1,s[i].percentage);
	}
	
	printf("\n Your data Inserted successfully!!!");
	fclose(fp);
}
