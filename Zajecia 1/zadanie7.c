#include <stdio.h>
#include <stdlib.h>

				
	int main()
	{
		printf("Podaj trzy wartosci do obliczenai sredniej harmonicznej: \n");
		float a;
		scanf("%f", &a);	
		float b;
		scanf("%f", &b);
	    float c;
	    scanf("%f", &c);
	    float s=3/(1/a + 1/b + 1/c);
		printf("Srednia= " "%f", s);
		
		return 0;
	}
