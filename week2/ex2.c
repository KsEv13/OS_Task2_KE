#include <stdio.h>
#include <string.h>
#define TXTLEN 256

int main(){
    char _inputtxt[TXTLEN];
    int i;
    puts("Enter a string: ");
    fgets(_inputtxt, TXTLEN, stdin);
    printf("Your phrase in reverse: \n");
    for (i = strlen(_inputtxt)-1; i>= 0; i--){
        if(_inputtxt[i] != '\n') {
            putchar(_inputtxt[i]);
        }
    }
    return 0;
}

