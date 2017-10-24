#include <stdio.h>

void kwadrat(int n)
{
	int i;
	int k=0;
	for(i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			k=i*i;
			printf("%d \n",k);
		}
	}
}

int main()
{
	printf("Kwadraty\n");
	kwadrat(7);
	
	return 0;
}
