#include<stdio.h>
#define ROWS 23
#define COLUMNS 45/*once constant expressions are assigned ,they cannot be changed anymore and they
 can be used throughout the code*/

void constant(void);

int main(){

const int num1=24;/*once constant variables are assigned ,they cannot be changed anymore and they
 are valid only in the scope they are in;*/

//num1=45; if you remove the line from the comment,you will get a run time  error;
printf("%d\n",ROWS);

constant();

return(0);
}

void constant(void){
    printf("%d\n",COLUMNS);
    printf("%d\n",ROWS);
}

