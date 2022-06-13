// even element total
#include<stdio.h>
int main()
{
	int a[10],i,evensum=0;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
        }                                              
	for(i=0;i<10;i++)
	{ 	
		if(a[i]%2==0)
		{
		printf("\n a[%d] %d",i,a[i]);
		evensum=evensum+a[i];
		}
	}
		printf("\n even element total=%d",evensum);	
	
	return 0;
}