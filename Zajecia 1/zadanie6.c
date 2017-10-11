#include <stdio.h>
#include <stdlib.h>

				
	int main()
	{
		int a;
		printf("Podaj dlugosc podstawy trojkata: ");
		scanf("%d", &a);	
		int h;
		printf("Podaj dlugosc wysokosci trojkata: ");
		scanf("%d", &h);
		int p = (a * h)/2;
		printf("Pole trojkata= " "%d", p);
		
		return 0;
	}
