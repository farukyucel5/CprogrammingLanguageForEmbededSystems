#include<stdio.h>

int main(){
    /*
    How Are Pointers Related to Arrays
    Ok, so what's the relationship between pointers and arrays? Well, in C,
    the name of an array, is actually a pointer to the first element of the array.

Confused? Let's try to understand this better, and use our "memory address example" above again.

The memory address of the first element is the same as the name of the array:*/

int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]);

// Get the value of the first element in myNumbers
printf("%d\n", *myNumbers);
printf("%d\n", *(myNumbers+1)); //2.element
printf("=====================================\n");
int i;

for (i = 0; i < 4; i++) {
  printf("%p\n", &myNumbers[i]);
}

printf("=====================================\n");


    int array[]={1,2,3,4,23,32,12,56};

    int* p=array;

    for(int i=0;i<8;i++){

        printf("%d\n",*p);
        printf("%p\n",p);
        p++;
    }

/*
    for(int i=0;i<8;i++){

        printf("%d\n",*(p+i));
    }

*/


}
