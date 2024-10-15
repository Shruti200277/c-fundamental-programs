#include<stdio.h>
void main()
{
	int n,m,r=0;
	printf("enter a no\n");
	scanf("%d",&n);
	do
	{
		m=n%10;
		n=n/10;
		r=r*10+m;
	}
	while(n>0);
	{
		printf("reverse=%d",r);
	}
}
