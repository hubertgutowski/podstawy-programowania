#include <stdio.h>

int f1(int n)
{
	int suma=n+n-1+n-2;
	return suma;
}

int main()
{
	int n;
	printf("Podaj liczbe:");
	scanf("%d", &n);
	int w=f1(n);
	printf("Suma trzech kolejnych liczb calkowitych z ktorych najwieksza to %d wynosi %d.", n, w);
	
	return 0;
}

