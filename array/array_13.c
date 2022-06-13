#include<stdio.h>
int main()
{
	int a[3][3],i,j,totald,usum=0,lsum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		
			if(i<j)
			{
			usum+=a[i][j];
			}
		}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		
			if(i>j)
			{
			lsum+=a[i][j];
			}
		}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		
			if(i==j)
			{
			totald+=a[i][j];
			}
		}
	printf("\n uper triangle=%d",usum);
	printf("\n lower triangle=%d",lsum);
	printf("\n total diandonal=%d",totald);
	
	return 0;

}