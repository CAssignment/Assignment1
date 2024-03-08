#include<stdio.h>
int main()
{
	int x,y,s,d,m;

	printf("Enter the value of x and y : \n");
	scanf("%d %d",&x,&y);
	s=x+y;

	d=x-y;

	m=x*y;

	printf("sum=%d \n",s);

	printf("diff=%d \n",d);

	printf("mul=%d \n",m);

	return 0;
}
