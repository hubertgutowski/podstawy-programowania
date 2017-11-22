#include <stdio.h>
#include <stdbool.h>

void f1(float tab1[], float tab2[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		tab2[i]=tab1[i];
	}
	for(i=0;i<n;i++)
	{
    printf("%f ", tab2[i]);
    }
}
int main()
{	
    int n, i;
    scanf("%d", &n);
	float tab1[n];
	float tab2[n];
	for(i=0;i<n-1;i++)
	{
		scanf("%f ", &tab1[i]);
	}
	f1(tab1,tab2,n);
	return 0;
}
