#include <stdio.h>
#include <math.h>

int main()
{
	int i,j , a1, a2, b1, b2, n;
	printf("Podaj 5 liczb: ");
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &b1);
	scanf("%d", &b2);
	scanf("%d", &n);
	if(a1<=a2 && b1<=b2 && n>=b2 && n>=a2 && a1>=0 && b1>=0)
	{	
		for(i=a1;i<=a2;i++)
		{
    		for(j=b1;j<=b2;j++)	
    		{
    			if(i==j)
    			printf("%d ", i);
			}
    	}
    } 
	else printf("blad danych");
    
	return 0; 
}
