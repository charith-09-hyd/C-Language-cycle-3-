#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,rm,x,s1,s2,sum1=0,sum2=0;
	printf("ENTER NUMBER:  \n");
	scanf("%d",&n);
	x = n;
	s1 = (n*n);
	while(s1!=0){
		r = s1%10;
		sum1 = (sum1*10) + r;
		s1 = s1/10;
	} s2 = sqrt(sum1);
	while(s2!=0){
		rm= s2%10;
		sum2 = (sum2*10) + rm;
		s2 = s2/10;
	} if(x==sum2){
		printf("ADAM NUMBER");
	}else{
		printf("NOT ADAM NUMBER");
	}
}