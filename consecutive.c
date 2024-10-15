#include<stdio.h>
void main()
{
	int n,count=0,r=0,max;
	printf("enter a binary digit\n");
	scanf("%d",&n);
	do
	{
		r=n%10;
		if(r==0)
		{
			count=count+1;
		}
		if(max<count)
		{
			max=count;
		}
		n=n/10;
	}
	while(n!=0);
	printf("maximum consecutive 0s %d",max);
}
