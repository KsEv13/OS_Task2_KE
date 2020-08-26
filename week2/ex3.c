#include <stdio.h>
void print_char(int n, char c) {
  for (int i = 0; i < n; ++i) {
    printf("%c", c);
  }
}
void print_triangle(int height) {
  for (int i = 1; i <= height; ++i) {
    print_char(height-i, ' ');
    print_char((i)*2-1, '*');
    printf("\n");
  }
}
int main(void) {
  int height;
  printf("Enter height: ");
  if (scanf("%d", &height) != 1) {
    // handle error if scanf fails
  }
  print_triangle(height);
  return 0;
}

