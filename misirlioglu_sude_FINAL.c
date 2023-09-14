#include<stdio.h>
#include <stdlib.h>

//function declaration

int calculateSeries(int base,int power,int ops)
{
	if(ops == 'p' || ops== 'P')
	{
		int i,digit,mult;
		mult = 1;
		digit = 1;
		printf("The series:");
		for(i = 1;i<=power;i++)
		{
			
			digit*=base;
			if(i<power)
			{
				printf("%d^%d * ",base,i);
			}
			else
			{
				printf("%d^%d \n",base,i);
			}
			 mult *= digit;
			 
			
			
		}
		printf("The result of the series:%d\n",mult);
	}
	else if(ops=='s' || ops=='S')
	{
		int i,digit,sum;
		sum = 0;
		digit = 1;
		printf("The series:");
		for(i = 1;i<=power;i++)
		{
			
			digit*=base;
			if(i<power)
			{
				printf("%d^%d + ",base,i);
			}
			else
			{
				printf("%d^%d \n",base,i);
			}
			 sum += digit;
			 
			
			
		}
		printf("The result of the series:%d\n",sum);
	}
	else
	{
		printf("Wrong operation symbol!!!\n");
	}
	
}

void getValues()
{
	int a,n;
	char OpSy;
	printf("Enter the base number:");
	scanf("%d", &a);
	printf("Enter the pow limit:");
	scanf("%d",&n);
	printf("Enter the operation symbol P or S:");
	scanf(" %c",&OpSy);
	
	calculateSeries(a,n,OpSy);
}

int main()
{
	getValues();
	system("PAUSE");
	return 0;
	
}

//function











