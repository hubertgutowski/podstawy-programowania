#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d;
	printf("Podaj a b i c: \n");
	scanf("%f %f %f", &a, &b, &c);
	if(a!=0)
	{
		d=b*b-4*a*c;
			if(d==0)
			{
				float x=-1.0*b/(2.0*a);
				printf("Wynik= %.2f", x);
			}
					else if(d>0)
					{
						float pier=sqrt(d);
						float x1, x2;
						x1=(-1.0*b-pier)/(2.0*a);
						x2=(-1.0*b+pier)/(2.0*a);
						printf("x1= %.2f  x2= %.2f", x1, x2);
					}
	                 else
	                 printf("Funkcja nie posiada pierwiastkow rzeczywistych.\n");
	}
	else
	{
		printf("funkcja nie jest kwadratowa.\n");
	}
	
	
	return 0;
}
