#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,r;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		r=n*i;
		printf("%d*%d=%d\n",n,i,r);
	}
	getch();
}
