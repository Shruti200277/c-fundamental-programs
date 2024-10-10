#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
	int i,n,g=4;
	bool result=false;
	while(result!=true)
	{
			printf("enter your number\n");
	        scanf("%d",&n);
		if(g==n)
		{
			result=true;;
			printf("your guess is correct\n");
		}
			
		
		else
		{
			printf("wrong guess try again");
			
		}
	
	}
}
