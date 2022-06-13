#include<stdio.h>
int main()
{

     int i,n=1;
     printf("n=");
     scanf("%d",&n);
     for(i=1;i<=n;i*=2,n++)
     {
        printf("\t%d",i*n);
     }
      return 0;
      


}