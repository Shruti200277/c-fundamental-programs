#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,sum=0,n,c;
	printf("enter your number\n");
	scanf("%d",&n);
	if(i%2==0)
	{
		while(i<=n)
		{
			c=i*i*i;
			printf("cube=%d\n",c);
			i=i+2;
		    sum=sum+c;
		}
		printf("sum=%d",sum);
	}
	
}
