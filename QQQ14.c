#include<stdio.h>
int main()
{
	int n,i,fib1=0,fib2=1,nextterm;
	printf("ENTER 'n': \n");
	scanf("%d",&n);
	
	while(n>i){
		nextterm = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextterm;
		i++;
	}printf("FIBONACCI SERIES: %d,%d",fib1,fib2);
	return 0;
}