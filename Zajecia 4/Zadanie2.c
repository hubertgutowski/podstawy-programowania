#include <stdio.h>

int f1(int x, int y)
{
		if(y == 0)
		{
			return x;
		}
		else if(x == 0)
		{
			return y;
		}
		else
		{
			return f1(x-1 ,y) + f1(x, y-1);
		}
}

int main()
{
	int x, y;
	printf("Podaj x:");
	scanf("%d", &x);
	printf("Podaj y:");
	scanf("%d", &y);
	
	while(x<0 || y<0)
	{
		printf("Jedna lub obie liczby sa ujemne! Prosze wpisac dwie liczby nieujemne!\n");
		printf("Podaj x:");
		scanf("%d", &x);
		printf("Podaj y:");
		scanf("%d", &y);
	}
	
	int wynik=f1(x, y);
	printf("\nFunkcja dla podanych zmiennych przyjmuje wartosc %d.", wynik);
	return 0;
	
}
