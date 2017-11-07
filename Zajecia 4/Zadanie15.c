#include <stdio.h>

int main()
{
	int x1, x2, y1, y2, a, b;
	int pole;
	printf("Podaj wspolrzedna x1:");
	scanf("%d", &x1);
	printf("Podaj wspolrzedna y1:");
	scanf("%d", &y1);
	printf("Podaj wspolrzedna x2:");
	scanf("%d", &x2);
	printf("Podaj wspolrzedna y2:");
	scanf("%d", &y2);
	a=(x1-x2);
	if(a<0)
	a=a*(-1);
	b=(y1 -y2);
	if(b<0)
	b=b*(-1);
	pole=a*b;
	printf("Pole prostokata wynosi o przekatnej w punktach (%d,%d) i (%d,%d) wynosi: %d", x1, y1, x2, y2, pole);
	
	return 0;
}
