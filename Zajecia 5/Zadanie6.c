#include <stdio.h>

void zamiana(int tab1[], int tab2[], int tab3[], int n)
{
	int i;
	for(i=0;i<2*n;i++)
	{
		if(i%2==0) tab1[i]=tab3[i/2];
		else tab1[i]=tab2[i/2];
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int tab1[2*n];
	int tab2[n];
	int tab3[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", &tab2[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d", &tab3[i]);
	}
	zamiana(tab1, tab2, tab3, n);
	
	for(i=0;i<2*n;i++)
	{
		printf("%d ", tab1[i]);
	}
	
	return 0;
}
