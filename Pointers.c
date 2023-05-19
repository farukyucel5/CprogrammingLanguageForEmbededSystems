#include<stdio.h>

int main(){
int myAge = 43; // an int variable

/*printf("%d\n", myAge);  // Outputs the value of myAge (43)
printf("%p\n", &myAge); // Outputs the memory address of myAge*/

/*
Good To Know: There are two ways to declare pointer variables in C:

int* myNum;
int *myNum;
*/


int birthYear=1994;
int* p=&birthYear;

printf("%p\n",&birthYear);// Outputs the memory address of birthYear
printf("%p\n",p);// Outputs the memory address of birthYear

printf("%d\n",birthYear);
printf("%d\n",*p);/*You can also get the value of the variable the pointer points to,
by using the * operator (the dereference operator):*/



/*Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
*/





}
