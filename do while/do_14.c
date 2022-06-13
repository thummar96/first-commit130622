#include<stdio.h>
int main()
{
	int i=1,n=0,n1=0;

	do
	{
		if(i%2==0)
		{
		n=n+i;
	
		}
		else
		{
		n1=n1+i;
		
		}
		i++;
	 }while(i<=10);
	 printf("\n even number=%d",n);
	 printf("\n odd number=%d",n1);
	 printf("\n total=%d",n+n1);

	return 0;
}