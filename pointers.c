#include<stdio.h>
int main()
{
	int i;
	int a[3]={10,20,30};
	int *p=a;
	int size= sizeof(a)/sizeof a[0];
	for(i=0;i<size;i++)
	{
		printf("%d\n",*p);
		++p;
	}

	return 0;
}
