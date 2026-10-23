#include<stdio.h>
int main()
{
	int n,i,pos,a[50];
	printf("ENTER SIZE OF LIST, POSITION TO BE DELETED: \n");
	scanf("%d%d",&n,&pos);
	printf("ENTER ELEMENTS OF LIST:  \n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	if(pos>n || pos<1)
	{
		printf("DELETION NOT POSSIBLE\n");
	}else{
		for(i=(pos-1) ; i<(n-1) ; i++)
		{
			a[i] = a[i+1];
		}
		n--;
		printf("ARRAY AFTER DELETION  IS: \n");
		for(i=0 ; i<n ; i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	return 0; 
}