#include<stdio.h>
#include<math.h>
int main()
{

	int a,b,c,d,e,f,total,sum,PerCentage;
	printf("ENTER TOTAL MARKS FOR EACH SUBJECT:  \n");
	scanf("%d",&total);
	printf("ENTER MARKS FOR 6 SUBJECTS:   \n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	sum = a+b+c+d+e+f;
	
	PerCentage = (sum/(6*total))*100 ;
	
	switch(PerCentage){
		case 100 :
		case 90  :  printf("GRADE: A+");
		break;
		case 80  : printf("GRADE: A");
		break; 
		case 70 :  printf("GRADE: B+");
		break;
		case 60 : printf("GRADE: B");
		break;
		case 50 : printf("GRADE: C");
		break;
		default : printf("FAIL");
}
	    
		
	}
	
	
