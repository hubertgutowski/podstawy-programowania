#include <stdio.h>


int f1(float cena, float podw, float kryt)
{
	int i=0;
	podw = podw * 0.01;
    while(cena<kryt)
	{
		cena = cena + cena * podw;
		i++;
	}
	return i;
}

int main()
{
	float cena, podw, kryt, podwproc;
	do
	{
	printf("Podaj cene produktu:");
	scanf("%f", &cena);
	}
	while(cena<=0);	
	do
	{
	printf("Podaj wartosc procentowa podwyzki (0-100):");
	scanf("%f", &podw);
	}
	while(podw<0 || podw>100);
	printf("Podaj wartosc krytyczna:");
	scanf("%f", &kryt);
	int w=f1(cena, podw, kryt);
	printf("Produkt o cenie %.2f przekracza wartosc krytyczna %.2f\nprzy %d podwyz. o wartosci procentowej %.2f%%.", cena, kryt, w, podw );	
	return 0;
}
