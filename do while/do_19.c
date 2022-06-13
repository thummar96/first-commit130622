#include<stdio.h>
int main()
{

	int i=0,n,a=0,b=1,c;
	printf("n=");
	scanf("%d",&n);
	printf("%d",b);
	do
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i++;
	}while(i<=n);
	return 0;
}