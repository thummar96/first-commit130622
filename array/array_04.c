// odd possition element total
#include<stdio.h>
int main()
{
	int a[10],i,oddsum=0;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i+=2)
	{ 	
	
		
		printf("\n a[%d] %d",i,a[i]);
		oddsum=oddsum+a[i];
		
	}
		printf("\t odd possition element total=%d",oddsum);	
	
	return 0;
}