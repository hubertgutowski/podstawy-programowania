#include <stdio.h>
#include <math.h>

int dl(double x1, double x2, double y1, double y2)
{
	return sqrt(pow((x2 - x1),2)+pow((y2 - y1),2));
}

int main()
{
	double x1, x2, y1, y2;
	printf("Podaj x1:");
	scanf("%lf", &x1);
	printf("Podaj y1:");
	scanf("%lf", &y1);
	printf("Podaj x2:");
	scanf("%lf", &x2);
	printf("Podaj y2:");
	scanf("%lf", &y2);
	double w=dl(x1,x2,y1,y2);
	printf("Dlugosc odcinka wynosi: %.2lf", w);
	
	return 0;
	
}
