#include <stdio.h>

int main(){

int num1;
printf("Type a number ..");
num1=getchar();

printf("The char entered: %c.\n",num1);

printf("you typed ..'");
putchar(num1);
printf("'\n");

printf("you typed ..");
putchar(num1);
putchar('\n');

return(0);
}
