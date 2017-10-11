#include <stdio.h>
#include <stdlib.h>

				
	int main()
	{
		int a;
		printf("Podaj a: ");
		scanf("%d", &a);
		int x;
		printf("Podaj x: ");
		scanf("%d", &x);
        int b;
        printf("Podaj b: ");
        scanf("%d", &b);
    	int y = a * x + b;
    	printf("Wynik dzialania: " "%d", y);
    	

		return 0;
	}
