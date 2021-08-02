#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // a + b
    // a - b
    int sum = *a + *b;
    int difference = abs(*a - *b);
    
    *a = sum;
    *b = difference;        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}c
