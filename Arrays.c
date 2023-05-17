#include<stdio.h>
#define MEALS 4

int main(){

/*int calories[MEALS];

int total=0;
puts("Calorie Counter ");
for(int x=0;x<MEALS;x++){
  printf("Calorie at meal %d ",x+1);
  scanf("%d",&calories[x]);
  total=total+calories[x];

}

printf("you had a total of %d calories.\n",total);*/

char hello[]="Greetings,human!\n";

int n;
n=0;

while(hello[n]!='\0'){
    putchar(hello[n]);
    n++;
}

return(0);

}
