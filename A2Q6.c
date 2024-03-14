#include<stdio.h>
int main()
{
	int n,temp,rev=0,rem=0;
	printf("Enter the value n : ");
	scanf("%d",&n);

	temp=n;
	while(temp!=0)
	{
	rem=temp%10;
	rev=rev*10+rem;
	temp=temp/10;
	}
	printf("rev= %d\n",rev);

	if(rev == n)
		{
		printf("Palindrome \n");
		}
	else
		{
		printf("Not Palindrome \n");
		}

 return 0;
}
