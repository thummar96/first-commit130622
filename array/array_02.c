#include<stdio.h>
int main()
{
	int a[5],b[5],i,sum[5];
	for(i=0;i<5;i++)
	{
		printf("enter a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" enter b[%d]=",i);
		scanf("%d",&b[i]);
	}	
	for(i=0;i<5;i++)

	{
		sum[i]=a[i]+b[i];
		printf("\n a[%d]=%d  b[%d]:=%d  sum[%d]=%d",i,a[i],i,b[i],i,sum[i]);
	}
	return 0;
}