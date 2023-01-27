#include<stdio.h>
#include<iostream>

struct student{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int standard;
	char school[100];
};

main()
{
	int i,n;
	printf("Enter number of student : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0; i<n; i++)
	{
		system("cls");
		
		printf("Student(%d/%d)\n",i+1,n);
		
		printf("Enter your Student ID: \n");
		scanf("%d",&s[i].id);
		
		printf("Enter your Student Name: \n");
		scanf("%s",&s[i].name);
		
		printf("Enter your Student Age: \n");
		scanf("%d",&s[i].age);
		
		printf("Enter your Student Course: \n");
		scanf("%s",&s[i].course);
		
		printf("Enter your Student City: \n");
		scanf("%s",&s[i].city);
		
		printf("Enter your Student Standard: \n");
		scanf("%d",&s[i].standard);
		
		printf("Enter your Student School: \n");
		scanf("%s",&s[i].school);
	}
	
	printf("\n\nSTUDENT DATA\n");
	
	printf(" ID\tName\tAge\tCourse\tCity\tStandard\tSchool\n______________________________________________________________\n");
	
	for(i=0; i<n; i++)
	{
		printf(" %d\t%s\t%d\t%s\t%s\t%d\t\t%s\t\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
	}
}
