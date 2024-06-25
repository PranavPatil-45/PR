#include<stdio.h>
#include<conio.h>

void main()
{
	int Basesalary,HRA,DA,Ta,grossSalary;
	printf("Enter Base salary:");
	scanf("%d",&Basesalary);
	
	HRA=Basesalary*10/100;
	DA=Basesalary*5/100;
	Ta=Basesalary*8/100;
	grossSalary=HRA+DA+Ta+Basesalary;
	printf("GrossSlary=%d",grossSalary);
	
	
	
	
}
