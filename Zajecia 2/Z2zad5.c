#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int x;
	int y;
	do
	{
		printf("0. Exit\n");
		printf("1. Dodawanie\n");
		printf("2. Odejmowanie\n");
		printf("3. Mnozenie\n");
		printf("4. Dzielenie\n");
		scanf("%d", &a);
		
		
		
			switch(a)
			{
				case 0:
					break;
				case 1:
					printf("Podaj x: \n");
					scanf("%d", &x);
					printf("Podaj y: \n");
					scanf("%d", &y);
					int w1=x+y;
					printf("X + Y = %d\n", w1);
					break;
				case 2:
					printf("Podaj x: \n");
					scanf("%d", &x);
					printf("Podaj y: \n");
					scanf("%d", &y);
					int w2=x-y;
					printf("X - Y = %d\n", w2);
					break;
				case 3:
					printf("Podaj x: \n");
					scanf("%d", &x);
					printf("Podaj y: \n");
					scanf("%d", &y);
					int w3=x*y;
					printf("X * Y = %d\n", w3);
					break;
				case 4:
					printf("Podaj x: \n");
					scanf("%d", &x);
					printf("Podaj y: \n");
					scanf("%d", &y);
					int w4=x/y;
					printf("X / Y = %d\n", w4);
					break;
				default:
					printf("Wybierz dzialanie 0-4.\n");
			}
	}
	while(a!=0);
	
	return 0;
}
