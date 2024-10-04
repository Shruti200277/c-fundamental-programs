#include<stdio.h>
#include<conio.h>
int main()
{
	int sp,cp,p,l;
	printf("enter the prices");
	scanf("%d%d",&sp,&cp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("profit=%d",p);
	}
    else
        {
        	l=cp-sp;
        	printf("loss=%d",l);
		}
		return 0;
}
