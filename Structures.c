#include<stdio.h>
#include<string.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
  int age;
  char myString[30]; // String
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;
  struct myStructure s2;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';
  s1.age=29;
  s2.myNum=28;
  s2.myLetter='F';
  s2.age=26;

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);
  printf("My age: %d\n",s1.age);

  printf("Your number %d\n",s2.myNum);
  printf("Your letter %d\n",s2.myLetter);
  printf("Your age %d\n",s2.age);

  /*Remember that strings in C are actually an array of characters, and unfortunately,
  you can't assign a value to an array using = sign.

  However, there is a solution for this!
  You can use the strcpy() function and assign the value to s1.myString, as follows:

  */

  strcpy(s1.myString,"My string");

  printf("my string: %s\n",s1.myString);


  struct myStructure s3={12,'C',34,"We win!"};

   printf("%d %c %d %s", s3.myNum, s3.myLetter, s3.age, s3.myString);




  return 0;
}
