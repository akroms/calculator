// Basic calculation  
 
#include <stdio.h> 
 
void 
main() { 
  int a, b, c; 
  char d; 
 
  printf("Input a calculation: "); 
  scanf("%d %c %d", & a, & d, & b); 
 
  switch (d) { 
  case '+': 
    c = a + b; 
    printf("%d", c); 
    break; 
 
  case '-': 
    c = a - b; 
    printf("%d", c); 
    break; 
 
  case '*': 
    c = a * b; 
    printf("%d", c); 
    break; 
 
  case '/': 
    c = a / b; 
 
    if (c == 0) { 
      /* Float num */ 
      float c; 
      c = (float) a / (float) b; 
      printf("%f", c); 
    } else { 
      /* Dec num */ 
      printf("%d", c); 
    } 
    break; 
  } 
}
