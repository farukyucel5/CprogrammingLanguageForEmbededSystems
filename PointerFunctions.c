#include <stdio.h>

int* max(int *a, int *b) {
 if (*a > *b)
     return a;
 return b;
}

int main() {
 int x = 105, y = 102, *ptr;
 printf("Original Numbers: x = %d, y = %d",x , y);
 ptr = max(&x, &y);
 printf("\nMaximum of said two numbers: %d", *ptr);
 return 0;
}
