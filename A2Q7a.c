#include<stdio.h>

int main()
{
	int year;
	printf("Enter the year :\n");
	scanf("%d",&year);

	if(year%400==0)
			printf("%d is a Leap year\nTotal number of days in %d is= 366\n");

	else if(year%4==0)
			{
			if (year%100!=0)
			printf("%d is a Leap year\nTotal number of days in %d is= 366\n");
			else
			printf("%d is not a Leap year\nTotal number of days in %d is= 365\n");
			}
	else
		printf("%d is not a Leap year\nTotal number of days in %d is= 365\n");
	
	return 0;
}
