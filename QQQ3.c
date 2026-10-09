#include<stdio.h>
#include<math.h>
int main()
{
	int x,x1,x2,x3;
	Labelname: printf("\nENTER 4 +VE VALUES Only:  \n");
	            scanf("%d%d%d%d",&x,&x1,&x2,&x3);
	if(x>0 && x1>0 && x2>0 && x3>0){
		printf("\n%d +%d +%d +%d = %d\n",x,x1,x2,x3,x+x1+x2+x3);
		goto Labelname;
		
	}else{
		printf("\nENTER +VE VALUES ONLY \n");
		
		
	}
}