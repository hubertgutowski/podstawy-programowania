#include <stdio.h>

int main()
{
	int x, y;
	float wynik;
	printf("Podaj x:");
	scanf("%d", &x);
	printf("Podaj y:");
	scanf("%d", &y);
	if (x<0)
	{
		x=x*(-1);
	}
	if (y<0)
	{
		y = y*(-1);
	}
	wynik = 1.0*(x + y)/2;
	printf("Wynik = %.2f", wynik);
}
