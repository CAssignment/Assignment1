#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number : \n");
	scanf("%d",&a);

	if (a%2 == 0)
		{
			printf("a is an even number \n");
		}
	else
		{
			printf("a is an odd number \n");
		}
	return 0;
}
