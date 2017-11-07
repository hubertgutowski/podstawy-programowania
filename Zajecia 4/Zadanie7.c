#include <stdio.h>

void f1(int n, int m)
{
	int i;
	for(i=1; i<n; i++)
	{
		int mod=i%m;
		if(mod==0)
		{
			printf("%d\n", i);
		}
		else;
	}
}

int main()
{
	int n, m;
	printf("Podaj n:");
	scanf("%d", &n);
	printf("Podaj m:");
	scanf("%d", &m);	
	printf("Liczby nieujemne mniejsze od %d podzielne przez %d:", n, m);
	f1(n, m);
	
	return 0;
}
