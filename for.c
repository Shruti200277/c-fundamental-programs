#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("enter your number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
		printf("%d even ",i);
	}
    else
    {
    	printf("%d odd ",i);
	}
	sum=sum+i;
}
printf("%d",sum);
getch();
}
