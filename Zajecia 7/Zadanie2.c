#include <stdio.h>

void max(int a, int b)
{
	if(a>b)
	{
		printf("%p\n",&a);
		printf("%d\n",a);
	}
	else
	{
		printf("%p\n",&b);
		printf("%d\n",b);
	}
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	int *wsk1=&a;
	int *wsk2=&b;
	max(*wsk1,*wsk2);
	
	
	return 0;
}

