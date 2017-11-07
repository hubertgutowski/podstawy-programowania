#include <stdio.h>

int main()
{
	int n, suma, nadw;
	printf("Podaj pierwsza liczbe naturalna:");
	scanf("%d", &n);
	suma+=n;
	if(n<0)
	{
		printf("liczba jest mniejsza od zera");
	}
	do
	{
		printf("Podaj kolejna liczbe naturalna:");
		scanf("%d", &n);
		if (n<0)
		{
			printf("liczba jest mniejsza od zera");
		}
		else
		{
			suma+=n;
		}
	}
	while (suma < 100);	
	nadw=suma - 100;
	printf("Suma podanych liczb naturalnych = %d", suma);
	printf("Wartosc przekroczenia = %d", nadw);
	
	return 0;
}
