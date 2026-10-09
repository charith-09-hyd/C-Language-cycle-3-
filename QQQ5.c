#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("ENTER NUMBER=  \n");
	scanf("%d",&n);
	
	for(i=2 ; i<n ; i++)
	
		if(n%i==0){
		
	 printf("COMPOSITE NUMBER");
	 count++;
    }
	if(count==0){
		printf("PRIME NO.");
	}

	
	
}