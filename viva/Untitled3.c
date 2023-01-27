#include<stdio.h>
#include<string.h>

struct Student
{
	char Name[100] , Name_Sub[100][100] , Grade ;
	int Roll_No , Num_Sub , Marks[10] , Total ;
	float Per;
	
};

void main()
{
	int I  ;
	struct Student S;
	
	FILE *FP;
	
	printf("Enter Your Name : ");
	gets(S.Name);
	printf("Enter Your Roll Number : ");
	scanf("%d",&S.Roll_No);
	
	printf("How Many Subject : ");
	scanf("%d",&S.Num_Sub);
	
	S.Name_Sub[S.Num_Sub][10];
	
	for(I=0;I<S.Num_Sub;I++)
	{
		printf("Enter %d Subject : ",I+1);
		scanf("%s",&S.Name_Sub[I]);
	}
	
	S.Marks[S.Num_Sub];
	
	for(I=0;I<S.Num_Sub;I++)
	{
		printf("Enter %s Subject Marks : ",S.Name_Sub[I]);
		scanf("%d",&S.Marks[I]);
	}
	
	//Total
	S.Total = 0;
	for(I=0;I<S.Num_Sub;I++)
	{
		if(S.Marks[I] != NULL)
		{
			S.Total = S.Total + S.Marks[I];
		}
	}
	S.Per = S.Total / S.Num_Sub ;
	printf("\nTotal : %d",S.Total);
	printf("\nPersentage : %2.f",S.Per);
	
	//Grade
	if(S.Per<=100 && S.Per>=80)
	{
		S.Grade = 'A';
	}
	else if(S.Per<80 && S.Per>=60)
	{
		S.Grade = 'B';
	}
	else if(S.Per<60 && S.Per>=33)
	{
		S.Grade = 'C';
	}
	else if(S.Per>33)
	{
		S.Grade = 'F';
	}
	
	printf("\n\nGrade : %c ",S.Grade);
	
	
	//insert File 
	FP=fopen("Marks.txt","w");
	if(FP==NULL)
	{
		printf("File Not Found...!!!");
	}
	
	//show file
	fprintf(FP,"\t Student Marksheet \n\n");
	fprintf(FP,"_____________\n");
	fprintf(FP,"| Name\t\t : %s              |\n",S.Name);
	fprintf(FP,"| Roll Number\t : %d                  |\n",S.Roll_No);
	fprintf(FP,"|                                     |\n| \t\tSubject Marks         |\n");
	fprintf(FP,"| ------------------------------------|\n");
	fprintf(FP,"| ------------------------------------|\n");
	for(I=0;I<S.Num_Sub;I++)
	{
		fprintf(FP,"| %s Marks\t : %d/100             |\n",S.Name_Sub[I],S.Marks[I]);
	}
	fprintf(FP,"| ------------------------------------|\n");
	fprintf(FP,"| ------------------------------------|\n");
	fprintf(FP,"| Total\t\t = %d/%d            |\n",S.Total,(S.Num_Sub*100));
	fprintf(FP,"| Percentage\t = %.2f              |\n",S.Per);
	fprintf(FP,"| Grade\t\t = %c                  |\n|",S.Grade);
	fprintf(FP,"_____________|\n");
	
	
	system("CLS");
	printf("\nAll Data Insert In File...!!!");
	
}
