#include<stdio.h>
int main()
{
	char c,k;
	int n;
	printf("Enter a Character: \n");
	scanf("%c",&c);

	k=printf("ASCII value of :%d \n",c);

	printf("Decimal of ASCII value of :%d \n",c);

	printf("Hex of ASCII value of :%x \n",c);

	printf("Octal of ASCII value of :%o \n",c);


	printf("------------------------------------------------------------ \n");
	
	printf("Enter a Number : \n");
	
	scanf("%d",&n);

	printf("Charactor for entered ASCII value is :%c \n",n);

		return 0;
}
