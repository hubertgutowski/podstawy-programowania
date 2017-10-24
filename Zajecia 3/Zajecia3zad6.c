#include <stdio.h>

int pot(int n)
{
	if(n==0)
	{
	return 1;
    }
	else
	{
	return pot(n-1)*2;
    }
}

int main()
{
	printf("Obliczanie wartosci 2^n \n");
	printf("%d ",pot(10));
	
	return 0;
}
