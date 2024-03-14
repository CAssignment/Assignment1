#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number a= \n");
	scanf("%d",&a);

	if(a>0)
		{
			printf("%d is Positive number \n",a);
		}
	else if(a<0)
		{
			printf("%d is Negative number \n",a);
		}
	else
		{
			printf("%d is Zero \n",a);
		}
	return 0;
}
