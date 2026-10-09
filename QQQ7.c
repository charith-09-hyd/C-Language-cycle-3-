#include<stdio.h>
int main()
{
	int i,n;
	printf("\nENTER 'n':  \n");
	scanf("%d",&n);
	for(i=1 ; i<=50 ; i++)
	{
		if(i%n==0)
		printf("\n%d\n",i);
	}
}