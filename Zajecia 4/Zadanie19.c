#include <stdio.h>

int f1(n)
{
	int i;
	int suma = 0;
	if (n<6)
	{
		return n;
	}
	else
	{
		for(i=1;i<=3;i++)
		{
			suma+=f1(n-2*i);
		}
	}
	return suma;
}

int main()
{
	int n;
	printf("Podaj wyraz ciagu dla jakiego chcesz obliczyc wartosc:");
	scanf("%d", &n);
	int w=f1(n);
	printf("Wartosc wyrazu: %d", w);
	
	return 0;
}
