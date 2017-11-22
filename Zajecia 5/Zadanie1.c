#include <stdio.h>
#include <stdbool.h>

bool f1(float a, float b, float c)
{
	if(a+b>c && a+c>b && c+b>a)
	return true;
	else
	return false;
}


int main()
{
	float a, b, c;
	printf("Podaj a: ");
	scanf("%f", &a);
	printf("Podaj b: ");
	scanf("%f", &b);
	printf("Podaj c: ");
	scanf("%f", &c);
	printf(f1(a, b ,c)?"True":"False");
	return 0;
}
