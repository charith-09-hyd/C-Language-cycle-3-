#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("ENTER NUMBER:  \n");
	scanf("%d",&n);
	
	for(i=1 ; i<n ; i++){
		if(n%i==0)
		{
			sum = sum + i;
			
		}
		
	} if(sum == n){
		printf(" PERFECT NUMBER");
	}else{
		printf("NOT PERFECT NUMBER");
	}
}