#include <stdio.h>
void swap(int *a, int *b);
int main (void) {
    printf("Enter 2 numbers: ");
    int x, y;
    scanf ("%d", &x);
    scanf ("%d", &y);
    printf("%d\n", x);
    printf("%d\n", y);
    putchar('\n');
    swap(&x, &y);
    printf("%d\n", x);
    printf("%d\n", y);
}
void swap(int *a, int*b) {
    int f;
    f=*a;
    *a=*b;
    *b=f;
}

