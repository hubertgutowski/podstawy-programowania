#include <stdio.h>

int pole(int a, int h)
{
	return (a*h)/2;
}

int main()
{
	int a, h;
	printf("Pole trojkata\n");
	printf("Podaj a: ");
	scanf("%d", &a);
	printf("Podaj h: ");
	scanf("%d", &h);
	printf("Pole wynosi: %d ",pole(a,h));
	
	return 0;
}
