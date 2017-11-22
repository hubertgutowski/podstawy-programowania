#include <stdio.h>

int max(int tab[], int n)
{
	int max=tab[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(tab[i]>max)
		max=tab[i];
	}
	return max;
}

int main()
{
	int n;
	scanf("%d", &n);
	int tab[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", &tab[i]);
	}
	printf("Max = %d", max(tab, n));
	
	return 0;
}
