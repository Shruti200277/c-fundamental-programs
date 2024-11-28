#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rev =0,r,m;
	printf("Enter the num =");
	scanf("%d",&n);
	m =n;
	while(n>0)
	{
		r = n%10;
		rev =rev*10+r;
		n = n/10;
		
	}
	if(m==rev)
	{
		printf("the num is palindrome= %d",m);
	}
	else
	{
		printf("the num is not palindrome =%d",m);
	}
	getch();
}
