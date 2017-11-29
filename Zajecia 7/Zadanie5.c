#include <stdio.h>
#include <stdlib.h>

double* f1(double *a)
{
    free(a);
    a = NULL;
}

int main()
{
	double *a = malloc(sizeof(double*));
    *a = 60;
    double *wynik = f1(a);
	if(wynik==NULL)
	{
		printf("A jest nullem\n");
	}
	else
	{
		printf("A nie jest nullem\n");
	}
	
	return 0;
}
