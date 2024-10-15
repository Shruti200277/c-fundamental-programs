#include<stdio.h>
void main()
{
	int n,num;
	printf("enter a no:\n");
	scanf("%d",&n);
	do
	{
		printf("enter a no");
		scanf("%d",&num);
	}
	while(num!=n);
	printf("number is matched");
}
