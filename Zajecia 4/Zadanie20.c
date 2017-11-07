#include <stdio.h>

int f1(int x, int y)  
{
	if(y==x)
	{
		return x;
	}
	else if(x>y)
	{
		return 2*f1(x/y, y);
	}
	else
	{
		return 2*f1(x, y/x);
	}
}

int main()
{
	int x, y;
	printf("Podaj x:");
	scanf("%d", &x);
	printf("Podaj y:");
	scanf("%d", &y);
	int w=f1(x, y);
	printf("f(x,y) = %d", w);
	
	return 0;
	
}
