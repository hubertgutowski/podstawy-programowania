#include <stdio.h>

int f1(int p, int w)
{
	int i;
	int pot=1;
	for(i=1;i<=w;i++)
	{
		pot=pot*p;
	}
	return pot;
}

int main()
{
	int p, w;	
	printf("Podaj podstawe:");
	scanf("%d", &p);
	printf("Podaj wykladnik:");
	scanf("%d", &w);
	int wy=f1(p, w);	
	printf("%d do potegi %d wynosi %d.", p, w, wy);
	
	return 0;
}
