#include <stdio.h>
#include <math.h>
int f1(int n)
{
	int i=cbrt(n);
	return i;
}

int main()
{
	int n;
	printf("Podaj liczbe pierwiastkowana:");
	scanf("%d", &n);
	int w=f1(n);
    printf("Podloga z pierwiastka z %d wynosi %d.", n, w);
    
    return 0;
}
