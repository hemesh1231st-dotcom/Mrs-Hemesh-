#include <stdio.h>
int main()
{
	int n,i,sums,res;
		printf("Enter a number:");
		scanf("%d",&n);
		printf("\n Number from 1to%d:\n",n);
		for(i=1;i<=n;i++)
		{
			printf("%d",i);
		}
		    sums=0;
		    i=1;
		    while(i<=n)
		{
			sums=sums+i;
			i++;
		}
		    res=1;
		    i=1;
			do
		{
			res=res*i;
			i++;
		}
        while(i<=n);
        printf("\n\n sum of number=%d",sums`);
        printf("\n Factorial of %d=%d",res);
        return 0;
}