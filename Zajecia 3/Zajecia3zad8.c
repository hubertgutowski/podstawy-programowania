#include <stdio.h>

int silnia(int n)
{
	if(n==0)
	return 1;
	else
	return silnia(n-1)*n;
}

int main()
{
	printf("Silnia \n");
	printf("%d", silnia(3));
	
	return 0;
}
