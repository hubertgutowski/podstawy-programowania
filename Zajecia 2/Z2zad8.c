#include <stdio.h>
#include <math.h>

int main()
{
	float a, b;
	printf("Podaj A: ");
	scanf("%f", &a);
	printf("Podaj B: ");
	scanf("%f", &b);
		if(a>0 && b>0)
		{
	    	printf("I, II, III cwiartka ");
	    }
	    else if(a>0 && b<0)
	    {
	    	printf("I, III, IV cwiartka ");
		}
		else if(a<0 && b>0)
	    {
	    	printf("I, II, IV cwiartka ");
		}
		else if(a<0 && b<0)
	    {
	    	printf("II, III, IV cwiartka ");
		}
	    else if(a==0 && b>0)
	    {
	    	printf("I, II cwiartka ");
		}
		else if(a==0 && b<0)
	    {
	    	printf("III, IV cwiartka ");
		}
		else if(a>0 && b==0)
	    {
	    	printf("I, III cwiartka ");
		}
		else if(a<0 && b==0)
	    {
	    	printf("II, IV cwiartka ");
		}
		else if(a==0 && b==0)
	    {
	    	printf("Wykres nie nalezy do zadnej cwiartki. ");
		}
		
	return 0;
}
