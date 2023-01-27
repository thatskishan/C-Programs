#include<stdio.h>
#include<iostream>


struct employee{
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	int exp;
	char companyName[100];
};

main()
{
	int i,n;
	printf("Enter number of Employee : ");
	scanf("%d",&n);
	
	struct employee s[n];
	
	for(i=0; i<n; i++)
	{
		system("cls");
		
		printf("Employee(%d/%d)\n",i+1,n);
		
		printf("Enter your Employee ID: \n");
		scanf("%d",&s[i].id);
		
		printf("Enter your Employee Name: \n");
		scanf("%s",&s[i].name);
		
		printf("Enter your Employee Age: \n");
		scanf("%d",&s[i].age);
		
		printf("Enter your Employee Role: \n");
		scanf("%s",&s[i].role);
		
		printf("Enter your Employee City: \n");
		scanf("%s",&s[i].city);
		
		printf("Enter your Employee Exprience in Years: \n");
		scanf("%d",&s[i].exp);
		
		printf("Enter your Employee company: \n");
		scanf("%s",&s[i].companyName);
	}
	
	printf("\n\nEmployee Record\n\n");
	
	printf(" ID\tName\tAge\tRole\tCity\tExperience\tCompany\n______________________________________________________________\n");
	
	for(i=0; i<n; i++)
	{
		printf(" %d\t%s\t%d\t%s\t%s\t%d\t\t%s\t\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].exp,s[i].companyName);
	}
}
