#include <stdio.h>

int main()
{
	int a,b;

	a = 5; b = 20;

	printf("In this case, variable %c is greater.\n",
			(a>b ? 'a' : 'b'));
    int p =(a>b? a+5:b+5);

    printf("The value of the parameter: %d  ",p);

	return(0);
}

