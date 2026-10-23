#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,num,x,result=0,i;
	printf("ENTER NUMBER :  \n");
	scanf("%d",&n);
	
	num = n;
	x = num;
	while(n!=0)
	{
		r = n%10;
		n = n/10;
		i++;
		
	} while(x!=0)
	{
		r = x%10;
		result += pow(r,i);
		x = x/10;
	}if(result==num){
		printf("%d is ARMSTRONG NO.",num);
	}else{
		printf("%d is NOT ARMSTRONG NO.",num);
	}
}