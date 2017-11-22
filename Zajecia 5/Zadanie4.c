#include <stdio.h>
#include <stdbool.h>

bool f1()
{
	float tab[5];
	float suma, kw;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%f", &tab[i]);
		kw=tab[i]*tab[i];
		suma+=kw;
	}
	if(suma>30)
	return true;
	else
	return false;
}
int main()
{	
	printf(f1()?"True":"False");
	
	return 0;
}
