#include <stdio.h>

int f1(double n)
{
	int i;
	for(i=1;i*i<=n;i++);
	return i-1;
}
int main()
{
	int n;
	printf("Podaj liczbe pierwiastkowana: ");
	scanf("%d", &n);
	int calk=f1(n);
    printf("Czesc calkowita pierwiastka z %d wynosi %d.", n, calk);
    
    return 0;
}
