#include <stdio.h>

int max(a, b)
{
	return (a>b)?a:b;
}

int min(a, b)
{
	return a+b-max(a, b);
}

int main()
{
	int a, b;
	printf("Podaj a:");
	scanf("%d", &a);
	printf("Podaj b:");
	scanf("%d", &b);
	int m=min(a, b);
	printf("Minimum wynosi %d.", m);
	
	return 0;
}
