#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calculateTheMaximum(int n, int k) {
    int a, b, c = 0, d = 0, e = o;

    for (a = 1; a < n; a++) {
        for (b = n; b > a; b--) {
            if ((a & b) < k && (a & b) > c) { c = a & b; }
            if ((a | b) < k && (a | b) > c) { c = a | b; }
            if ((a ^ b) < k && (a ^ b) > c) { c = a ^ b; }
        }
    }
    printf("%d\n%d\n%d", c, d, e);
}

int main() {
    int n, k;
    scanf(%d %d, &n, &k);
    calculateTheMaximum(n, k);

    system("pause");
    return 0;
}
