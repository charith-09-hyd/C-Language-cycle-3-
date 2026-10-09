#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float s;
	printf("\nENTER 'n' +ve numbers:  \n");
	scanf("%d",&n);
	for(i=0 ; i<=n ; i++){
	
	
	    if(n>0)
	    s= sqrt(i);
		 printf("\nSQRT(%d) = %.2f\n",i,s);
    }
}