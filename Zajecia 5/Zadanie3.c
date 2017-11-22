#include <stdio.h>

int main()
{
	float tab[5];
	float suma, sr;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%f", &tab[i]);
		suma+=tab[i];
	}
	printf("%f ", suma);
	sr=suma/5;
	printf("%f", sr);
	return 0;
}
