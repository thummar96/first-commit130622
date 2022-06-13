#include<stdio.h>
int main()
{

	int i,n,a=0,b=1,c;
	printf("n=");
	scanf("%d",&n);
	printf("%d",a);
	printf("%d",b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;

	}
	return 0;
}