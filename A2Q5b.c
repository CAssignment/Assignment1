#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the numbers : \n");
	scanf("%d %d %d",&a,&b,&c);

	(a>b && a>c)? printf("%d is Maximum \n",a):(b>a && b>c)? printf("%d is Maximum \n",b):printf("%d is Maximum \n",c);
	
}
