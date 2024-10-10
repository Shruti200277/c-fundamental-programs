#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1;
printf("enter your number\n");
scanf("%d",&n);
if(n>0)
{
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("%d",fact);
}
else
	printf("number is negative");
}
