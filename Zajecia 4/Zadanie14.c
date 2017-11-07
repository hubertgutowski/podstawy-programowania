#include <stdio.h>

int f1(float a, float b)
{
	int c1, c2;
	float r1, r2;
	c1 = (int)a;
	c2 = (int)b;
	r1 = a - c1;
	r2 = b - c2;
	printf("Czesc ulamkowa a: %.2f\nCzesc ulamkowa liczby b: %.2f", r1, r2);
	if(r1==r2)
	{
		return 1;
	}
	else
	return 0;
}

int main()
{
	float a, b;
	printf("Podaj a:");
	scanf("%f", &a);
	printf("Podaj b:");
	scanf("%f", &b);
	int w=f1(a, b);
	if (w==1)
	{
		printf("Czesci ulamkowe liczb a i b sa rowne.");
	}
	else if(w==0)
	{
		printf("Czesci ulamkowe liczb a i b NIE sa rowne");
	}
	
	return 0;
	
}
