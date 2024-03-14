#include<stdio.h>
 int main()
 {
     float c,f;
     printf("Enter temperature in Fahrenheit : \n");
     scanf("%f",&f);
 
     c=5*(f-32)/9;
     printf("Temperature in Celsius = %.2f \n",(float)c);
	  
 	 printf("----------------------------------------------\n");

     printf("Enter temperature in Celsius : \n");
     scanf("%f",&f);
 
     f=(9/5)*c+32;
     printf("Temperature in Fahrenheit = %.2f \n",(float)f);
 
 
 
     return 0;
 }

