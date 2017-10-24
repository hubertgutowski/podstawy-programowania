#include <stdio.h>

int fibo(int n)
{
	if(n==0 || n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}

int main()
{
	printf("Obliczanie n-tej wartosci ciagu fibonacciego.\n");
	printf("%d ",fibo(7));
	
	return 0;
}
