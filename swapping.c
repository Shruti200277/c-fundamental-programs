#include<stdio.h>
void swap (int a,int b);
void main()
{
	int a,b;
	printf("enter any two number:");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	swap(a,b);
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d and b=%d",a,b);
}
