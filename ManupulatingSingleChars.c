#include <stdio.h>
#include <ctype.h>

int main(){

int ch='a';

printf("original %c\n",ch);
printf("uppercase %c\n",toupper(ch));
printf("lower %c\n",tolower(ch));
//==============================================================================

printf("original %d\n",ch);
printf("uppercase %d\n",toupper(ch));
printf("lower %d\n",tolower(ch));
//==============================================================================
int c;

do{
    c=getchar();
    c=toupper(c);
    putchar(c);
}while(c!='\n');

//===============================================================================


int acter;

do{
    acter=getchar();
    if(isalpha(acter))
         putchar(acter);


}while(acter!='\n');

//===============================================================================


int acter1;

do{
    acter1=getchar();
    if(isdigit(acter1))
         putchar(acter1);


}while(acter1!='\n');

return(0);

}
