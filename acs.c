#include<stdio.h>
#include<conio.h>
void main()
{
	float r;
	char s;
	int l,b,a,h;
	printf("ENTER ANY VALUE\n");
	scanf("%d%d%d%d%f",&l,&b,&a,&h,&r);
	printf("enter any shape");
	scanf(" %c",&s);
	switch (s)
	{
		case'c':
		     printf("area=%f",2*3.14*r);
		     break;
		case'r':
		     printf("area=%d",l*b);
		     break;
		case't':
		     printf("area=%d",1/2*a*h);
		     break;
		default:
		     printf("wrong choice");
		     break;
   }
}
