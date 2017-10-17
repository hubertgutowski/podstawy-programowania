#include <stdio.h>
#include <math.h>

int main()
{
	int a, i;
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("%d ",i);
	}
    if(a==0)
    printf("%d", a);
	return 0;
}
