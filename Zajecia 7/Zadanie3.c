#include <stdio.h>

void *wsk(int *wsk1, int *wsk2)
{
	if(wsk1>wsk2)
	{
		printf("%d ", wsk1);
	}
	else
	{
		printf("%d ", wsk2);
	}
}

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	int *wsk1=&a;
	int *wsk2=&b;
	wsk(wsk1, wsk2);
	
	return 0;
}
