// even possition element total
#include<stdio.h>
int main()
{
	int a[10],i,evensum=0;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i+=2)
	{ 	
		printf("\n a[%d] %d",i,a[i]);
		evensum=evensum+a[i];
	}	
		printf("\t even possition element total=%d",evensum);	
	
	return 0;
}