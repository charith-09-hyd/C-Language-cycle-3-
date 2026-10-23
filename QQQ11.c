#include<stdio.h>
int main()
{
	int n,bn,dn=0,base=1,r;
	printf("ENTER BINARY NUMBER:  \n");
	scanf("%d",&n);
	bn = n;
	while(n>0)
	{
		r = n%10;
		dn = dn + (r*base);
		n = n/10;
		base = base*2;
	} printf("DECIMAL NUMBER = %d\n",dn);
	return 0;
}