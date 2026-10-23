#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,A[5][5],B[5][5],C[5][5],i,j,k;
	printf("ENTER ROWS AND COLUMNS OF MATRIX 'A':  \n");
	scanf("%d%d",&r1,&c1);
	printf("ENTER ROWS AND COLUMNS OF MATRIX 'B':   \n");
	scanf("%d%d",&r2,&c2);
	
	if(c1 != r2){
		printf("MULTIPLICATION NOT POSSIBLE\n");
		
	}
	printf("ENTER ELEMENTS OF A:  \n");
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c1 ; j++)
		{
			scanf("%d",&A[i][j]);
			
		}
	}
	printf("ENTER ELEMENTS OF MATRIX B:  \n");
	for(i=0 ; i<r2 ; i++)
	{
		for(j=0 ; j<c2 ; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c2 ; j++)
		{
			C[i][j] = 0;
			for(k=0 ; k<c1 ; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	printf("PRODUCT OF MATRICES IS:  \n");
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c2 ; j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}