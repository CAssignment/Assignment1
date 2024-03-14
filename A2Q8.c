#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter the Quantity : ");
	scanf("%d",&n);
	p=5*n;
	if(n<=30)
		{
			printf("Price = %d\n",p);
		}
	else if(n>30 && n<=50)
		{
			printf("Price =%d\n",p);

			printf("Discount =%.2f\n",(float)p*10/100);
			printf("Discounted Price =%.2f\n",(float)p*90/100);

		}
	else
		{
			printf("Price = %d\n",p);
	
			printf("Discount = %.2f\n",(float)p*15/100);
			printf("Discounted Price  = %.2f\n",(float)p*85/100);
		}

	return 0;
}
