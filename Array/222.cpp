#include<stdio.h>
int main()
{
	int I , N , A[N] , J , B[N] , Sum ;
	printf("Enter The Number Of Values :");
	scanf("%d",&N);
	for(I=0;I<N;I++)
	{
		printf("A[%d] : ",I);
		scanf("%d",&A[I]);
	}
	printf("\n");
	
	for(J=0;J<N;J++)
	{
		printf("B[%d] : ",J);
		scanf("%d",&B[J]);
	}
	printf("\n---------------Output--------------\n\n");
	for(Sum=0;Sum<N;Sum++)
	{
	printf("A[%d] + B[%d] = C[%d]\n",Sum,Sum,A[Sum]+B[Sum]);
	}
}
