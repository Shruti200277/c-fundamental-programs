#include<stdio.h>
void main()
{
	int day,month,year,j,k,f;
	printf("enter you day,month and year:\n");
	scanf("%d%d%d",&day,&month,&year);
	if(month==1)
	{
		month=month+12;
		year=year-1;
	}
	else if(month==2)
	{
		month=month+12;
		year=year-1;
	}
	else
	{
		month=month;
		year=year;
	}
	j=year/100;
	k=year%100;
	f= ((day+(13*(month+1)/5)+k+(k/4)+(j/4)+(5*j))%7);
	switch(f)
	{
		case 0:
			printf("saturday");
			break;
		case 1:
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		default:
			printf("invalid");
			
	}
}
