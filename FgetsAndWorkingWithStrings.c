#include <stdio.h>

int main(){
char input[64]; //63 characters plus null
printf("Instructions: ");
fgets(input,64,stdin);
puts(input);
printf("The word you made: %s",input);

return(0);

}
