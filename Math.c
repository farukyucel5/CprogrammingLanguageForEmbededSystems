#include <stdio.h>
#include <math.h>

int main(){
int a;
int b;

a=4;
b=6;

printf("%d + %d = %d\n",a,b,a+b);
printf("%d : %d = %f\n",a,b,(float)a/b);


float c;
c=53.00;
float d;
d=12.00;

printf("%f : %f = %f\n",c,d,c/d);

printf("%f to the %f power = %f\n",c,d,pow(c,d));
printf("The square root of %f is %f\n",c,sqrt(c));


return(0);

}
