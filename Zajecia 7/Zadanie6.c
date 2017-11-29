#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	float *tab=(float*)malloc(n*sizeof(float));
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%f", tab+i);
	}
	
	float max;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			max=*tab;
		}
		else if(max<*(tab+i))
		{
			max=*(tab+i);
		}
	}
	
	float min;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			min=*(tab+i);
		}
		else if(min>*(tab+i))
		{
			min=*(tab+i);
		}
	}
	
	float sr=0;
	for(i=0;i<=n;i++)
	{
		sr+=*(tab+i);
		if(i==n)
		{
			sr/=n;
    	}
	}
	
	float suma=0;
	for(i=0;i<=n;i++)
	{
		suma+=*(tab+i);
	}
	
	printf("max: %f\n", max);
	printf("min: %f\n", min);
	printf("srednia: %f\n", sr);	
	printf("suma: %f\n", suma);
	
	return 0;
}
