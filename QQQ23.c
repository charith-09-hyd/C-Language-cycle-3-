#include<stdio.h>
int main()
{
	int n,i,list[100],element,position;
	printf("ENTER SIZE OF LIST:   \n");
	scanf("%d",&n);
	printf("ENTER ELEMENTS OF LIST:   \n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&list[i]);
	}
	printf("ENTER THE ELEMENT TO BE PLACED AND THE POSITION:   \n");
	if(n>=100 || position<=0 || position>(n+1) )
	{
		printf("INVALID");
	}
	for(i= (n-1) ; i>= (position - 1) ; i-- )
	{
	list[i+1] = list[i];
		
	}
	list[position - 1] = element ; 
	n++;
	printf("ARRAY AFTER INSERTION :  \n ");
	for(i = 0 ; i<n ; i++)
	{
		printf("%d\n",list[i]);
		
	}
	return 0;
}