#include<stdio.h>
int main()
{
	int i=65,j;
	do
	{
		j=1;
		do
		{
			printf("\t%c",i);
			j++;
		}while(j<=5);
		
		printf("\n");
		i++;
	}while(i<=69);
	
		return 0;

}