#include <stdio.h>

int suma(int n)
{
	int i;
	int k=0;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		k+=i;
	}
	return k;
}

int main()
{
	int n;
	printf("Suma liczb nieparzystych z przedzia³u domkniêtego\n");
	printf("Podaj liczbe: ");
	scanf("%d", &n);
	printf("Suma: %d ",suma(n));
	
	return 0;
}
