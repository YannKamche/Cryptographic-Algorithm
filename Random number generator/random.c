// Random number generator using C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void random(int* x, int a, int c, int m) {
    *x = (a * (*x) + c) % m;
}

int main() {
    int seed = time(NULL);
    int x = seed;
    int a = 1103515245;
    int c = 12345;
    int m = 2147483648; 
    for (int i = 0; i < 10; i++) {
        random(&x, a, c, m);
        printf("%d\n", x);
    }

    return 0;
}