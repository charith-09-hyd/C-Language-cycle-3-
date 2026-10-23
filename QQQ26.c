#include<stdio.h>
int main()
{
	int r,c,i,j,A[5][5],B[5][5],flag=0;
	printf("ENTER ROWS AND COLUMNS OF MATRIX 'A':  \n");
	scanf("%d%d",&r,&c);
	printf("ENTER ELEMENTS OF MATRIX A:  \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			scanf("%d",A[i][j]);
		}
	}
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			B[i][j] = A[j][i];
		}
	} 
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(A[i][j] != B[j][i])
			{
				flag  = 1;
				break; 
			}
		}
	}
	if(flag == 0)
	{
		printf("SYMMETRIC MATRIX\n");
		
	}else{
		printf("NON SYMMETRIC MATRIX\n");
	}
	return 0; 
}