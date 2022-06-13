#include<stdio.h>
int main()
{
	float i=0.5,j=0.5;
	while(i<=10)
        {
	printf("\t %.2f",j);
	j+=i;
	i++;
	}
	return 0;
}

