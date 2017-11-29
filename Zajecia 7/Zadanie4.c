#include <stdio.h>
#include <stdlib.h>

float *f1()
{
	float *a=(float*)malloc(sizeof *a);
	return a;
}

int main()
{
	printf("%d", f1());
	
	return 0;
}
