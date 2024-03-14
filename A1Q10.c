#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,s,peri;
	double res, area;
	printf("Enter the sides of triangle : \n");
	scanf("%d %d %d",&a,&b,&c);
	
	peri=a+b+c;
	printf("Perimeter of triangle is :%d \n",peri);

	s=peri/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is : %lf \n",area);

	return 0;
}
