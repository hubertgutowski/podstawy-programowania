#include <stdio.h>
#include <stdlib.h>

				
	int main()
	{
		printf("Obliczanie objetosci prostopadloscianu. \n");
		float a;
		printf("Podaj a:");
		scanf("%f" , &a);	
		float b;
		printf("Podaj b:");
		scanf("%f" , &b);
	    float c;
	    printf("Podaj c:");
	    scanf("%f" , &c);
	    float v = a * b * c;
		printf("V= " "%.2f", v);
		
		return 0;
	}
