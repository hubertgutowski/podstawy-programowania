#include <stdio.h>

int zwoc(int n)
{
	if(n<=0 || n==10)
	{
	return 0;
    }
	else
	{
	return 2*zwoc(n-1)+zwoc(n-2)+5;
    }
}

int main()
{
	printf("Jakas funkcja \n");
	printf("%d ",zwoc(3));
	
	return 0;
}
