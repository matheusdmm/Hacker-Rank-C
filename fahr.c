#include <stdio.h>

int main() {
    int start = 0, end = 300, incr = 20;
    float fahr, celcius;

    fahr = start;

    printf ("fahr - celcius\n");
    while (fahr <= end) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("%4.0f %6.1f\n", fahr, celcius);
        fahr = fahr + incr;
    }
    getchar();
}