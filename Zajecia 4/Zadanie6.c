#include <stdio.h>

int f1(int n)
{
	if(n>=0)
	{
		int i;
		for(i=n+1; i<=i; i++)
		{
			if((i%2!=0 || i==2) && (i%3!=0 || i==3) && (i%5!=0 || i==5) && (i%7!=0 || i==7) && (i%11!=0 || i==11) && (i%13!=0 || i==13))
			return i;
		}
	}
	else;
}

int main()
{
	int n;
	printf("Podaj liczbe calkowita:");
	scanf("%d", &n);
	while(n<0)
	{
		printf("Podaj liczbe nieujemna!");
		scanf("%d", &n);
	}
	
	int pierw=f1(n);
	printf("Najmniejsza liczba pierwsza wieksza od %d to: %d",n ,pierw);	

	return 0;
}
