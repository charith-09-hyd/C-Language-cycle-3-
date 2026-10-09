#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,r,sum=0;
	printf("ENTER NUMBER:  \n");
	scanf("%d",&n);
	t=n;
	while(n!=0){
	    r = n%10;
	    sum = (sum*10) + r;
	    n = n/10;
}
	if(sum==t){
		printf("%d is PALINDROME",t);
	}else{
		printf("%d is NOT PALINDROME",t);
	}
}