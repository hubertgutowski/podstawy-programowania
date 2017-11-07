#include <stdio.h>
#include <math.h>

int main()
{
	int x, y; 
	float przeciw, przyp;
	printf("Podaj x:");
	scanf("%d", &x);
	printf("Podaj y:");
	scanf("%d", &y);
	przyp = sqrt(x*x);
	przeciw = sqrt((x*x) + (y*y));
	float cos = 1.0 * przyp/przeciw;
	printf("Cosinus wynosi = %f", cos);

	return 0;
	
}
