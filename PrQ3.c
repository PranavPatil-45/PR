#include<stdio.h>
#include<conio.h>

void main()
{
	int Firstangle, Secondangle, Thirdangle; 
	
	printf("Enter First Angle:");
	scanf("%d",&Firstangle );
	
	printf("Enter Second Angle:");
	scanf("%d",&Secondangle );
	
	Thirdangle=(Firstangle+Secondangle)-180;
	printf("Third Angle=%d",Thirdangle);
}
