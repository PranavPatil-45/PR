#include<stdio.h>
#include<conio.h>

void main()
{
	int c;
	float f;	
	printf("Enter Temperature in celsuius:");
	scanf("%d",&c);
	
	f=(1.8*c)+32;
	
	printf("temperature in farenheit=%.1f",f);
	
}
