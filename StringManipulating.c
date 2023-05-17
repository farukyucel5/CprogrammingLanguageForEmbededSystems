#include <stdio.h>
#include <string.h>

int main(){

/*char string[]="just how long am I?";

int len;

len=strlen(string);
printf("The following string:\n");
puts(string);
printf("is %d characters long \n",len);

char input[200];

int length;
printf("Instructions: ");
fgets(input,200,stdin);

len=strlen(input);
printf("you typed %d characters of instructions \n",len);*/

char str1[]="Hello world,";
char str2[]="I am here to explore!";
char buffer[64];

strcpy(buffer,str1);
strcat(buffer,str2);
puts(buffer);




return(0);

}
