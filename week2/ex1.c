#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int integer = INT_MAX;
    float floatingPoint = FLT_MAX;
    double doublePoint = DBL_MAX;
    printf("Integer = %d\nFloat = %f\nDouble = %f\n", integer, floatingPoint, doublePoint);
    printf("Sizeof integer = %lu\nSizeof float = %lu\nSizeof double = %lu\n", sizeof(integer), sizeof(floatingPoint), 
sizeof(doublePoint));
    return 0;
}

