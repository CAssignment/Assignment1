#include<stdio.h>
int main()
{
	int a,b,d;
	printf("Enter the numbers :\n");
	scanf("%d %d",&a,&b);

	d= a/b;
	if(b !=0 )
		{
			printf("division d= %d \n",d);
		}
	else
		{
			printf("zero can't be a divider \n");
		}

	return 0;

}
