#include <stdio.h>

int max(int a, int b)
{
	if(a > b)
	return a;
	else
	return b;	
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	int *wsk1=&a;
	int *wsk2=&b;
	printf("%d", max(*wsk1, *wsk2));
	
	return 0;
}
