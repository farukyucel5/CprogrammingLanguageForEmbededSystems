#include<stdio.h>

int iscaps(int);
int main(){

int c;

do{
    c=getchar();
    if(iscaps(c))
        putchar(c);


}while(c!='\n');


}

/*int iscaps(int var){

   if(var<'A'|| var>'Z')
       return(0);

   else
       return(1);
}*/


int iscaps(int var){

   if(var>='A'&& var<='Z')
       return(1);

   else
       return(0);
}

