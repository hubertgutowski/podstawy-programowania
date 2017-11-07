#include <stdio.h>

int f1(int a)
{
	if(a!=0)
	{
		if(a%2==0)
	    {
			int k;
			k=a*a;
			return k;
		}
		else
		{
			int l;
			l=a*a-5;
			return l;
		}
    }
	else
	return 1;    
}

int main()
{
	int a;
	printf("Funkcja \n");
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	printf("%d \n", f1(a));

	return 0;
}
