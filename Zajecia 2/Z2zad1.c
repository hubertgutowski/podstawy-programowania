#include <stdio.h>

int max;

int main()
{
	int a, b, c;
	printf("Podaj 3 dowolne liczby: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
	 {
	 	max=a;
	 }
	else if(b>c && b>a)
	{
		max=b;
	}
	else max=c;
	
	printf("Najwieszka liczba to: %d\n", max);
	
return 0;
}
