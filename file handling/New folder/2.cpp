#include<stdio.h>
#include<string.h>

main()
{
	FILE *fp;
	
	int age,exp;
	char name[100],DOB[100],Email[100],Degree[100],school[100],college[100],add[100],city[100];
	long long int contact,pincode;
	
	fp = fopen("Reseume.txt","a");
	
	if(fp == NULL)
	{
		printf("Unable to open file!!!!\n");
	}
	
	printf("Enter Your Name : ");
	gets(name);
	printf("Enter Date Of Birth : ");
	gets(DOB);
	printf("Enter Your Email Address : ");
	gets(Email);
	printf("Enter Your Degree Qualification : ");
	gets(Degree);
	printf("Enter Your School Name : ");
	gets(school);
	printf("Enter Your Colledge Name : ");
	gets(college);
	printf("Enter Your Adderess : ");
	gets(add);
	printf("Enter Your City : ");
	gets(city);
	printf("Enter Your Pincode Number : ");
	scanf("%lld",&pincode);
	printf("Enter Your Age : ");
	scanf("%d",&age);
	printf("Enter Your Experience : ");
	scanf("%d",&exp);
	printf("Enter Your Contact Number : ");
	scanf("%lld",&contact);
	
	
	fprintf(fp,"\tRESEUME\n");
	fprintf(fp,"Name\t: %s\n",name);
	fprintf(fp,"Date of birth\t: %s\n",DOB);
	fprintf(fp,"Email\t: %s\n",Email);
	fprintf(fp,"Degree\t: %s\n",Degree);
	fprintf(fp,"School\t: %s\n",school);
	fprintf(fp,"College\t: %s\n",college);
	fprintf(fp,"Adderess\t: %s\n",add);
	fprintf(fp,"City\t: %s\n",city);
	fprintf(fp,"Pincode\t: %lld\n",pincode);
	fprintf(fp,"Age\t: %lld\n",age);
	fprintf(fp,"Experience\t: %lld\n",exp);
	fprintf(fp,"Contact No\t: %lld\n",contact);
	
	printf("\n Your data Inserted successfully!!!");
	fclose(fp);
		
	
}
