#include<stdio.h>
int main()
{
	int n,r,bin=0,m=1;
	printf("ENTER NUMBER=  \n");
	scanf("%d",&n);
	while(n!=0){
		r = n%2;
		bin = bin + (r*m);
		m = (m*10);
		n = n/2;
	}
	printf("\nBINARY VALUE = %d \n",bin);
	return 0;
}