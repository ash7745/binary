#include<stdio.h>
void main()
{
	
	long int binnum, decnum=0, i=1, rem;
	printf("Enter any binary number : ");
	scanf("%ld",&binnum);
	while(binnum!=0)
	{
		rem=binnum%10;
		decnum=decnum+rem*i;
		i=i*2;
		binnum=binnum/10;
	}
	printf("Equivalent decimal value = %ld",decnum);
}
