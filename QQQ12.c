#include<stdio.h>
int main()
{
	int n,fact = 1;
	printf("ENTER NUMBER:  \n");
	scanf("%d",&n);
	while(n!=0)
	{
		fact = fact*n;
		n--;
	}
	printf("%d! = %d",n,fact);
}